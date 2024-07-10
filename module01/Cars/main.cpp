#include "car.h"

int main()
{
    Car car1("Mercedes", 240);
    Car car2("Volvo", 170);
    Car car3(car1);
    Car car4;

    car4 = car2;
    std::cout << "Car 1, Name: " << car1.getName() << ", speed: " << car1.getSpeed() << "mph" << std::endl;
    std::cout << "Car 2, Name: " << car2.getName() << ", speed: " << car2.getSpeed() << "mph" << std::endl;
    std::cout << "Car 3, Name: " << car3.getName() << ", speed: " << car3.getSpeed() << "mph" << std::endl;
    std::cout << "Car 4, Name: " << car4.getName() << ", speed: " << car4.getSpeed() << "mph" << std::endl;
    return (0);
}
