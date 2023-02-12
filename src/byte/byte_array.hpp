
#include "safe_array/safe_array.h"

#include <cstdint>


namespace byte
{
    template<size_t len>
    using Array = safe::Array<uint8_t, len>;
}
