#include "sportscar.h"

SportsCar::SportsCar()
{
    std::cout << "Default sports car constructor called" << std::endl;
}

SportsCar::SportsCar(std::string brand, std::string model, unsigned int year, unsigned int speed) : Car(brand, model, year), _maxSpeed(speed)
{
    std::cout << "Sports car constructor called" << std::endl;
}

SportsCar::SportsCar(SportsCar &other) : Car(other), _maxSpeed(other.getSpeed())
{
    std::cout << "Sports car copy constructor called" << std::endl;
}

SportsCar::~SportsCar()
{
    std::cout << "Sports car destructor called" << std::endl;
}

SportsCar &SportsCar::operator =(SportsCar &other)
{
    this->_brand = other.getBrand();
    this->_model = other.getModel();
    this->_year = other.getYear();
    this->_maxSpeed = other.getSpeed();
    std::cout << "Sports car copy assignment operator called" << std::endl;
    return (*this);
}

void    SportsCar::drive(void) const
{
    std::cout << "Driving " << this->getBrand() << ", model: " << this->getModel() << ", production year: " << this->getYear() << ", maximum speed:" << this->getSpeed() << std::endl;
}

unsigned int SportsCar::getSpeed(void) const
{
    return(this->_maxSpeed);
}
