#include <QCoreApplication>
#include "bustruck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Car car1;
    Bus bus1("VW", "Touareg", 2014, 9);
    Truck truck1("MAN", "Truck Nr1", 1999, "26 t");
    BusTruck bustruck1("Truckery", "Flying Dutchman", 2024, "67t", 246);
    bus1.drive();
    truck1.drive();
    bustruck1.drive();
    return (0);
}
