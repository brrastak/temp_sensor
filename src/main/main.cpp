
// user
#include "character_lcd.hpp"
#include "clock.hpp"
#include "cmn_circular_buffer.hpp"
#include "formatter.hpp"
#include "gpio.hpp"
#include "interrupt_vector.hpp"
#include "i2c.hpp"
#include "katakana.hpp"
#include "kunrei_parser.hpp"
#include "system_tick.hpp"
#include "temp_sensor_ds18b20.hpp"
#include "tick_counter.hpp"
#include "time_interval.hpp"
#include "timer_tick.hpp"



int main()
{
    hal::SystemTick msTick{1_ms, hal::InterruptVector<hal::IRQList::SysTick>::Subscribe};
    hal::TimerTick usTick{1_us};

    hal::TickCounter msCounter{msTick};
    hal::TickCounter usCounter{usTick};

    hal::Gpio<GPIOC, 13> debugLed{hal::OutputMode::push_pull, true};
    hal::Gpio<GPIOB, 10> i2cSck{hal::OutputMode::alt_open_drain};
    hal::Gpio<GPIOB, 11> i2cSda{hal::OutputMode::alt_open_drain};
    hal::Gpio<GPIOB, 1> oneWirePin{hal::OutputMode::open_drain, true};

    constexpr size_t buf_size{400};
    cmn::CircularBuffer<uint8_t, buf_size> dispBuf;
    cmn::CircularBuffer<uint16_t, buf_size> intervalBuf;

    clcd::CharacterLcd lcd{clcd::LcdType::lcd_20x04, dispBuf, intervalBuf, true};

    hal::I2c i2c{hal::I2cNumber::i2c2
        , lcd.GetMaxI2cBaudrate()
        , i2cSck
        , i2cSda
        , lcd.GetI2cAddress()
        , hal::InterruptVector<hal::IRQList::I2C2_EV>::Subscribe
        , hal::InterruptVector<hal::IRQList::I2C2_ER>::Subscribe
        , &dispBuf};

    // msCounter.Delay(4_s);

    driver::TempSensorDS18B20 sensor{oneWirePin, usTick};

    bool displayNotUpdate{false};
    cmn::time_interval_t timeout{};
    
    timeout = static_cast<cmn::time_interval_t>(intervalBuf.Get());
    usCounter.Reset();
    i2c.TriggerTransmission(1);

    int16_t minTempValue{1000};
    int16_t curTempValue{0};

    while (true)
    {
        if(usCounter.IsTimeoutPassed(timeout))
        {
            if (intervalBuf.IsEmpty())
            {
                timeout = 100_us;
            }
            else
            {
                i2c.TriggerTransmission(1);
                debugLed.Toggle();
                timeout = static_cast<cmn::time_interval_t>(intervalBuf.Get());
            }
        }

        if (msCounter.IsTimeoutPassed(1_s))
        {
            displayNotUpdate = !displayNotUpdate;
            // debugLed.Toggle();

            if (displayNotUpdate)
            {
                curTempValue = sensor.GetTemperature();
                if ((minTempValue > curTempValue) && sensor.IsTemperatureValid())
                {
                    minTempValue = curTempValue;
                }

                lcd.ClearLine(1);
                lcd << cmn::spaces << 2 << "Current: ";
                if (sensor.IsTemperatureValid())
                {
                    lcd << cmn::fixed_point << 1 << curTempValue << " C";
                }
                else
                {
                    lcd << cmn::spaces << 2 << '-';
                }

                lcd.ClearLine(2);
                lcd << cmn::spaces << 2 << "Minimum: ";
                lcd << cmn::fixed_point << 1 << minTempValue << " C";
            }
            else
            {
                sensor.UpdateTemperature();
            }
            
        }

        do
        {
            sensor.Proceed();
        }
        while (sensor.IsBusy());
    }

} 
