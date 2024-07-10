#include "car.h"

Car::Car()
{
    std::cout << "Default constructor called" << std::endl;
}

Car::Car(std::string name, unsigned int speed) : _name(name), _speed(speed)
{
    std::cout << "Car constructor called" << std::endl;
}

Car::Car(Car &other) : _name(other.getName()), _speed(other.getSpeed())
{
    std::cout << "Copy constructor called" << std::endl;
}

Car::~Car()
{
    std::cout << "Destructor called" << std::endl;
}

Car &Car::operator=(Car &other)
{
    this->_name = other.getName();
    this->_speed = other.getSpeed();
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

std::string Car::getName(void) const
{
    return (this->_name);
}

unsigned int    Car::getSpeed(void) const
{
    return (this->_speed);
}
