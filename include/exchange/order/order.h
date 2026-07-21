#pragma once

#include "enums.h"
#include "types.h"

namespace exchange
{
    namespace order
    {
        class Order
        {
        public:
            Order(ClientOrderId clOrdId, ExchangeOrderId exchOrdId, Price px, Quantity qty, 
                    Side side, OrderType orderType, OrderDuration orderDuration, Timestamp timestamp)
                    : clientOrderId_(clOrdId)
                    , exchangeOrderId_(exchOrdId)
                    , price_(px)
                    , originalQty_(qty)
                    , remainingQty_(qty)
                    , side_(side)
                    , orderType_(orderType)
                    , orderDuration_(orderDuration)
                    , timestamp_(timestamp)
                    , orderStatus_(OrderStatus::Active)
            {
                
            }

            ClientOrderId getClientOrderId() const noexcept
            {
                return clientOrderId_;
            }

            ExchangeOrderId getExchangeOrderId() const noexcept
            {
                return exchangeOrderId_;
            }

            Price getPrice() const noexcept
            {
                return price_;
            }

            Quantity getOriginalQty() const noexcept
            {
                return originalQty_;
            }

            Quantity getRemainingQty() const noexcept
            {
                return remainingQty_;
            }

            Side getSide() const noexcept
            {
                return side_;
            }

            OrderType getOrderType() const noexcept
            {
                return orderType_;
            }

            OrderDuration getOrderDuration() const noexcept
            {
                return orderDuration_;
            }

            Timestamp getTimestamp() const noexcept
            {
                return timestamp_;
            }

            OrderStatus getOrderStatus() const noexcept
            {
                return orderStatus_;
            }

        private:
            ClientOrderId clientOrderId_;
            ExchangeOrderId exchangeOrderId_;

            Price price_;
            Quantity originalQty_;
            Quantity remainingQty_;

            Side side_;
            OrderType orderType_;
            OrderDuration orderDuration_;

            Timestamp timestamp_;
            OrderStatus orderStatus_;
        };
    }
}