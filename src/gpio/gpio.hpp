
#include "i_gpio.hpp"
#include "pinbit.hpp"

// SVD-generated registers
#include "gpioaregisters.hpp"
#include "gpiobregisters.hpp"
#include "gpiocregisters.hpp"
#include "gpiodregisters.hpp"
#include "gpioeregisters.hpp"
#include "gpiofregisters.hpp"
#include "gpiogregisters.hpp"
#include "rccregisters.hpp"


namespace hal
{

enum class InputMode
{
    analog,
    floating,
    pull_up,
    pull_down
};

enum class OutputMode
{
    push_pull,
    open_drain,
    alt_push_pull,
    alt_open_drain
};

template<typename TPort, uint8_t pin>
class Gpio : public IGpio
{
public:
    Gpio(InputMode mode);
    Gpio(OutputMode mode);
    Gpio(OutputMode mode, bool initState);
    Gpio(const Gpio&) = delete;
    Gpio& operator=(const Gpio&) = delete;

    void Set() override;
    void Reset() override;
    void Toggle() override;
    void Write(bool newState) override;
    bool Get() override;

private:
    void initRcc();
    void setMode(InputMode mode);
    void setMode(OutputMode mode);
};

}



namespace hal
{

/// @brief Constructors
/// @tparam TPort GPIOA/B/C/D...
/// @tparam pin number
/// @param mode input/output, analog, push-pull etc
template<typename TPort, uint8_t pin>
Gpio<TPort, pin>::Gpio(InputMode mode)
{
    initRcc();
    setMode(mode);
}

template<typename TPort, uint8_t pin>
Gpio<TPort, pin>::Gpio(OutputMode mode)
{
    initRcc();
    setMode(mode);
}

template<typename TPort, uint8_t pin>
Gpio<TPort, pin>::Gpio(OutputMode mode, bool initState)
{
    initRcc();
    setMode(mode);
    Gpio<TPort, pin>::Write(initState);
}

template<typename TPort, uint8_t pin>
void Gpio<TPort, pin>::Set()
{
    PinBit<TPort, pin>::BSR::High::Write();
}

template<typename TPort, uint8_t pin>
void Gpio<TPort, pin>::Reset()
{
    PinBit<TPort, pin>::BRR::High::Write();
}

template<typename TPort, uint8_t pin>
void Gpio<TPort, pin>::Toggle()
{
    if (Get())
    {
        Reset();
    }
    else
    {
        Set();
    }
}

template<typename TPort, uint8_t pin>
void Gpio<TPort, pin>::Write(bool newState)
{
    if (newState == true)
    {
        Set();
    }
    else
    {
        Reset();
    }
}

template<typename TPort, uint8_t pin>
bool Gpio<TPort, pin>::Get()
{
    return PinBit<TPort, pin>::IDR::High::IsSet();
}

// private


template<typename TPort, uint8_t pin>
void Gpio<TPort, pin>::setMode(InputMode mode)
{
    PinBit<TPort, pin>::MODE::Input::Set();

    switch (mode)
    {
    case InputMode::analog:
        PinBit<TPort, pin>::CNF::InputAnalog::Set();
        break;
    case InputMode::floating:
        PinBit<TPort, pin>::CNF::InputFloating::Set();
        break;
    case InputMode::pull_down:
        PinBit<TPort, pin>::CNF::InputPull::Set();
        Reset();
        break;
    case InputMode::pull_up:
        PinBit<TPort, pin>::CNF::InputPull::Set();
        Set();
        break;
    }
}

template<typename TPort, uint8_t pin>
void Gpio<TPort, pin>::setMode(OutputMode mode)
{
    PinBit<TPort, pin>::MODE::Output::Set();

    switch (mode)
    {
    case OutputMode::push_pull:
        PinBit<TPort, pin>::CNF::OutputPushPull::Set();
        break;
    case OutputMode::open_drain:
        PinBit<TPort, pin>::CNF::OutputOpenDrain::Set();
        break;
    case OutputMode::alt_push_pull:
        PinBit<TPort, pin>::CNF::AlternateOutputPushPull::Set();
        break;
    case OutputMode::alt_open_drain:
        PinBit<TPort, pin>::CNF::AlternateOutputOpenDrain::Set();
        break;
    }
}
template<typename TPort, uint8_t pin>
void Gpio<TPort, pin>::initRcc()
{
    if constexpr(std::is_same_v<TPort, GPIOA>)
    {
        RCC::APB2ENR::IOPAEN::Enable::Set();
    }
    if constexpr(std::is_same_v<TPort, GPIOB>)
    {
        RCC::APB2ENR::IOPBEN::Enable::Set();
    }
    if constexpr(std::is_same_v<TPort, GPIOC>)
    {
        RCC::APB2ENR::IOPCEN::Enable::Set();
    }
    if constexpr(std::is_same_v<TPort, GPIOD>)
    {
        RCC::APB2ENR::IOPDEN::Enable::Set();
    }
    if constexpr(std::is_same_v<TPort, GPIOE>)
    {
        RCC::APB2ENR::IOPEEN::Enable::Set();
    }
    if constexpr(std::is_same_v<TPort, GPIOF>)
    {
        RCC::APB2ENR::IOPFEN::Enable::Set();
    }
    if constexpr(std::is_same_v<TPort, GPIOG>)
    {
        RCC::APB2ENR::IOPGEN::Enable::Set();
    }
}

}
