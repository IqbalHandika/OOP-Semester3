#include "Order.h"
#include <iostream>

Order::Order() : order(""), inKitchen(false), served(false) {}

void Order::takeOrder(const std::string& newOrder) {
    order = newOrder;
    inKitchen = true;
    served = false;
}

void Order::sendToKitchen() {
    inKitchen = true;
}

void Order::orderReady() {
    inKitchen = false;
    served = true;
}

void Order::serveOrder() {
    if (served) {
        std::cout << "Order has been served." << std::endl;
        served = false;
    } else {
        std::cout << "Order is not ready yet." << std::endl;
    }
}

void Order::clearOrder() {
    order = "";
    inKitchen = false;
    served = false;
}
