#ifndef WAITRESS_H
#define WAITRESS_H

#include "Table.h"

class Waitress {
    public:
        void takeOrder(Table& table, const std::string& newOrder);
        void sendToKitchen(Table& table);
        void orderReady(Table& table);
        void serveOrder(Table& table);
};

#endif // WAITRESS_H
