#pragma once

#include "order.h"
#include "trade.h"

#include <vector>

namespace exchange
{
    namespace orderbook
    {
        class OrderBook
        {
        public:

            void addOrder(order::Order&& order);
            void cancelOrder(ExchangeOrderId orderId);
            std::vector<trade::Trade> match(order::Order& order);
            bool wouldCrossBook(const order::Order& order) const;
            Price getBestBid() const;
            Price getBestAsk() const;
            bool containsOrder(ExchangeOrderId orderId) const;

        private:
            
        };
    }
}