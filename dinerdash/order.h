#ifndef ORDER_H
#define ORDER_H

#include <string>

class Order {
    public:
        std::string order;
        bool inKitchen;
        bool served;
    
    public:
        Order();
        void takeOrder(const std::string& newOrder);
        void sendToKitchen();
        void orderReady();
        void serveOrder();
        void clearOrder();
};

#endif // ORDER_H
