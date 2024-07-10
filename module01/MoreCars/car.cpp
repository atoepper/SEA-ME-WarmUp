#include "car.h"

Car::Car()
{
    std::cout << "Default car constructor called" << std::endl;
}

Car::Car(std::string brand, std::string model, unsigned int year) : _brand(brand), _model(model), _year(year)
{
    std::cout << "Car constructor called" << std::endl;
}

Car::Car(Car &other) : _brand(other.getBrand()), _model(other.getModel()), _year(other.getYear())
{
    std::cout << "Copy car constructor called" << std::endl;
}

Car::~Car()
{
    std::cout << "Car destructor called" << std::endl;
}

Car &Car::operator=(Car &other)
{
    this->_brand = other.getBrand();
    this->_model = other.getModel();
    this->_year = other.getYear();
    return (*this);
}

std::string Car::getBrand(void) const
{
    return(this->_brand);
}

std::string Car::getModel(void) const
{
    return(this->_model);
}

unsigned int    Car::getYear() const
{
    return(this->_year);
}

void    Car::drive(void) const
{
    std::cout << "Driving " << this->getBrand() << ", model: " << this->getModel() << ", production year: " << this->getYear() << std::endl;
}

