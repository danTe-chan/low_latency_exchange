#pragma once

#include <cstdint>

namespace exchange
{
    enum class Side : uint8_t
    {
        Buy = 1,
        Sell = 2
    };

    enum class OrderStatus : uint8_t
    {
        Active = 1,
        Inactive = 2
    };

    enum class OrderType : uint8_t
    {
        Limit = 1,
        Market = 2
    };

    enum class OrderDuration : uint8_t
    {
        Day = 1,
        Ioc = 2
    };
}
