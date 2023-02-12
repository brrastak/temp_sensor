
#include "one_wire.hpp"


namespace cmn
{

enum OneWire::BitOperation : uint8_t
{
    none,
    write_1_bit,
    write_0_bit,
    read_bit,
    reset,
    operation_number
};

OneWire::OneWire(hal::IGpio& pin
                , cmn::ICircularBuffer<uint8_t>* transmitBuffer
                , cmn::ICircularBuffer<uint8_t>* receiveBuffer)
    : m_pin{pin}
    , m_transmitBuffer{transmitBuffer}
    , m_receiveBuffer{receiveBuffer}
    , m_bitOperation{BitOperation::none}
    , m_bitStageIndex{0}
    , m_bitIndex{0}
    , m_byte{0}
    , m_error{OneWireError::no_error}
    , m_bytesToReceive{0}
{

}

void OneWire::AssignTransmitBuffer(cmn::ICircularBuffer<uint8_t>* buffer)
{
    m_transmitBuffer = buffer;
}

void OneWire::AssignReceiveBuffer(cmn::ICircularBuffer<uint8_t>* buffer)
{
    m_receiveBuffer = buffer;
}

void OneWire::EnableTransmitter()
{

}

void OneWire::DisableTranstitter()
{

}

void OneWire::EnableReceiver()
{

}

void OneWire::DisableReceiver()
{

}

void OneWire::TriggerTransmission()
{
    triggerNextByteWrite();
}

void OneWire::TriggerTransmission(size_t number)
{

}

void OneWire::Receive()
{
    Receive(1);
}

void OneWire::Receive(size_t number)
{
    m_bytesToReceive = number;
    triggerNextByteRead();
}

bool OneWire::IsTransmitted()
{
    return !IsBusy();
}

bool OneWire::IsReceived()
{
    return !IsBusy();
}

bool OneWire::IsBusy()
{
    return m_bitOperation != BitOperation::none;
}

void OneWire::Proceed()
{
    if (m_bitOperation == BitOperation::none)
    {
        return;
    }

    if (m_bitOperation == BitOperation::read_bit && isStageToRead())
    {
        readBit();
    }

    if (m_bitOperation == BitOperation::reset && isStageToCheckConnection())
    {
        checkConnection();
    }

    m_pin.Write(getPinStateToSet());

    goToNextStage();
}

OneWireError OneWire::GetError()
{
    return m_error;
}

cmn::time_interval_t OneWire::GetProceedInterval()
{
    static constexpr cmn::time_interval_t write1_low_interval{6_us};
    static constexpr cmn::time_interval_t write1_high_interval{64_us};

    static constexpr cmn::time_interval_t write0_low_interval{60_us};
    static constexpr cmn::time_interval_t write0_high_interval{10_us};

    static constexpr cmn::time_interval_t read_low_interval{6_us};
    static constexpr cmn::time_interval_t read_sample_delay{9_us};
    static constexpr cmn::time_interval_t read_high_interval{55_us};
    
    static constexpr cmn::time_interval_t reset_high_interval{3_us};
    static constexpr cmn::time_interval_t reset_low_interval{480_us};
    static constexpr cmn::time_interval_t reset_sample_delay{70_us};
    static constexpr cmn::time_interval_t reset_high_end_interval{410_us};

    static constexpr uint8_t max_stages_number{5};
    static constexpr cmn::time_interval_t interval_table[operation_number - 1][max_stages_number]
    {
        {0_us, write1_low_interval, write1_high_interval},
        {0_us, write0_low_interval, write0_high_interval},
        {0_us, read_low_interval, read_sample_delay, read_high_interval},
        {0_us, reset_high_interval, reset_low_interval, reset_sample_delay, reset_high_end_interval}
    };

    if (m_bitOperation == BitOperation::none)
    {
        return 0_us;
    }
    else
    {
        return interval_table[m_bitOperation - 1][m_bitStageIndex];
    }
}

void OneWire::Reset()
{
    m_bitOperation = BitOperation::reset;
}

bool OneWire::IsConnected()
{
    return GetError() != OneWireError::no_connection;
}

bool OneWire::getPinStateToSet()
{
    static constexpr uint8_t max_stages_number{5};
    static constexpr bool state_table[operation_number - 1][max_stages_number]
    {
        // write 1 bit
        {false, true, true},
        // write 0 bit
        {false, true, true},
        // read bit
        {false, true, true, true},
        // reset
        {true, false, true, true, true}
    };

    return state_table[m_bitOperation - 1][m_bitStageIndex];
}

void OneWire::goToNextStage()
{
    if (isFinalStage())
    {
        m_bitStageIndex = 0;
        finalizeOperation();
    }
    else
    {
        ++m_bitStageIndex;
    }
    
}

void OneWire::finalizeOperation()
{
    switch (m_bitOperation)
    {
    case BitOperation::write_1_bit:
    case BitOperation::write_0_bit:
        finalizeWrite();
        return;

    case BitOperation::read_bit:
        finalizeRead();
        return;

    case BitOperation::reset:
        m_bitOperation = BitOperation::none;
        return;

    default:
        return;
    }
}

void OneWire::finalizeWrite()
{
    static constexpr uint8_t bit_number{8};

    ++m_bitIndex;

    if (m_bitIndex == bit_number)
    {
        triggerNextByteWrite();
    }
    else
    {
        m_bitOperation = ((m_byte & (1 << m_bitIndex)) != 0) 
            ? BitOperation::write_1_bit 
            : BitOperation::write_0_bit;
    }
}

void OneWire::finalizeRead()
{
    static constexpr uint8_t bit_number{8};

    ++m_bitIndex;

    if (m_bitIndex == bit_number)
    {
        m_receiveBuffer->Put(m_byte);
        triggerNextByteRead();
    }
}

bool OneWire::isStageToRead()
{
    static constexpr uint8_t read_stage_index{2};

    return m_bitStageIndex == read_stage_index;
}

bool OneWire::isStageToCheckConnection()
{
    static constexpr uint8_t read_stage_index{3};

    return m_bitStageIndex == read_stage_index;
}

void OneWire::readBit()
{
    if (m_pin.Get())
    {
        m_byte |= (1 << m_bitIndex);
    }
}

void OneWire::checkConnection()
{
    m_error = m_pin.Get() ? OneWireError::no_connection : OneWireError::no_error;
}

bool OneWire::isFinalStage()
{
    static constexpr uint8_t stages_number[BitOperation::operation_number]{0, 2, 2, 3, 4};

    return m_bitStageIndex == stages_number[m_bitOperation];
}

void OneWire::triggerNextByteWrite()
{
    if (m_transmitBuffer == nullptr)
    {
        return;
    }

    if (m_transmitBuffer->IsEmpty())
    {
        m_bitOperation = BitOperation::none;
        return;
    }

    m_byte = m_transmitBuffer->Get();
    m_bitIndex = 0;
    m_bitOperation = (m_byte & 0b1) != 0 ? BitOperation::write_1_bit : BitOperation::write_0_bit;
}

void OneWire::triggerNextByteRead()
{
    if (m_receiveBuffer == nullptr)
    {
        return;
    }

    if (m_bytesToReceive == 0)
    {
        m_bitOperation = BitOperation::none;
        return;
    }

    m_byte = 0;
    m_bitIndex = 0;
    m_bitOperation = BitOperation::read_bit;
    --m_bytesToReceive;
}

}
