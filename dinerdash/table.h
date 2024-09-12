#ifndef TABLE_H
#define TABLE_H

#include "Order.h"

class Table {
    public:
        int tablenum;
        bool occupy;
        Order currentOrder;
    
    public:
        Table(int num);
        void occupyTable();
        void clearTable();
        void checkStatus();
};

#endif // TABLE_H
