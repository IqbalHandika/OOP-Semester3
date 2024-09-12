#include "Table.h"
#include <iostream>

Table::Table(int num) : tablenum(num), occupy(false) {}

void Table::occupyTable() {
    occupy = true;
}

void Table::clearTable() {
    occupy = false;
    currentOrder.clearOrder();
    std::cout << "Table " << tablenum << " has been cleared." << std::endl;
}

void Table::checkStatus() {
    std::cout << "Table " << tablenum << ": " 
              << (occupy ? "Occupied" : "Empty") << std::endl;
}
