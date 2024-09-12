#include "Waitress.h"
#include <iostream>

void Waitress::takeOrder(Table& table, const std::string& newOrder) {
    table.currentOrder.takeOrder(newOrder);
}

void Waitress::sendToKitchen(Table& table) {
    table.currentOrder.sendToKitchen();
}

void Waitress::orderReady(Table& table) {
    table.currentOrder.orderReady();
}

void Waitress::serveOrder(Table& table) {
    table.currentOrder.serveOrder();
}
