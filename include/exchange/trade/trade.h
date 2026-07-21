#pragma once

#include "types.h"

namespace exchange
{
    namespace trade
    {
        class Trade
        {
        public:
            Trade(TradeId tradeId, ExchangeOrderId buyOrderId, ExchangeOrderId sellOrderId, Price fillPrice,
                    Quantity fillQuantity, Timestamp timestamp)
                : tradeId_(tradeId)
                , buyOrderId_(buyOrderId)
                , sellOrderId_(sellOrderId)
                , fillPrice_(fillPrice)
                , fillQuantity_(fillQuantity)
                , timestamp_(timestamp)
            {}

            TradeId getTradeId() const noexcept
            {
                return tradeId_;
            }

            ExchangeOrderId getBuyOrderId() const noexcept
            {
                return buyOrderId_;
            }

            ExchangeOrderId getSellOrderId() const noexcept
            {
                return sellOrderId_;
            }

            Price getFillPrice() const noexcept
            {
                return fillPrice_;
            }

            Quantity getFillQuantity() const noexcept
            {
                return fillQuantity_;
            }

            Timestamp getTimestamp() const noexcept
            {
                return timestamp_;
            }

        private:
            TradeId tradeId_;
            ExchangeOrderId buyOrderId_;
            ExchangeOrderId sellOrderId_;
            Price fillPrice_;
            Quantity fillQuantity_;
            Timestamp timestamp_;
        };
    }
}