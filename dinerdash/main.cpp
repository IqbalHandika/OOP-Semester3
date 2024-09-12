#include "Waitress.h"
#include "Table.h"

int main() {
    Waitress waitress;

    Table table1(1);
    Table table2(2);

    table1.occupyTable();
    table2.occupyTable();

    waitress.takeOrder(table1, "Burger");
    waitress.takeOrder(table2, "Pizza");

    waitress.sendToKitchen(table1);
    waitress.sendToKitchen(table2);

    waitress.orderReady(table1);
    waitress.orderReady(table2);

    waitress.serveOrder(table1);
    waitress.serveOrder(table2);

    table1.checkStatus();
    table2.checkStatus();

    table1.clearTable();
    table2.clearTable();

    return 0;
}
