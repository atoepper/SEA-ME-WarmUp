#include <QCoreApplication>
#include "car.h"
#include "sportscar.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Car car1("VW", "Phaeno", 2005);
    Car car2("Mercedes", "C", 1998);
    car1.drive();
    car2.drive();
    SportsCar sCar1("Opel", "Corsa", 1996, 125);
    SportsCar sCar2(sCar1);
    SportsCar sCar3;
    sCar3 = sCar1;
    sCar1.drive();
    sCar2.drive();
    sCar3.drive();
    return (0);
}
