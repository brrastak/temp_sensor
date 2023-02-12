
#include "circular/circular.h"


namespace byte
{
    template<size_t len>
    using Stream = circular::Buffer<uint8_t, len>;
}
