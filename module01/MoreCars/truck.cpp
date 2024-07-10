#include "truck.h"

Truck::Truck()
{
    std::cout << "Default Truck constructor called" << std::endl;
}

Truck::Truck(std::string brand, std::string model, unsigned int year, std::string capacity) : Car(brand, model, year), _capacity(capacity)
{
    std::cout << "Truck constructor called" << std::endl;
}

Truck::Truck(Truck &other) : Car(other), _capacity(other.getCapacity())
{
    std::cout << "Copy Truck constructor called" << std::endl;
}

Truck::~Truck()
{
    std::cout << "Truck destructor called" << std::endl;
}

Truck &Truck::operator=(Truck &other)
{
    this->_brand = other.getBrand();
    this->_model = other.getModel();
    this->_year = other.getYear();
    this->_capacity = other.getCapacity();
    return (*this);
}

std::string    Truck::getCapacity(void) const
{
    return(this->_capacity);
}

void    Truck::drive(void) const
{
    std::cout << "Driving " << this->getBrand() << ", model: " << this->getModel() << ", production year: " << this->getYear() << ", capacity: " << this->getCapacity() << std::endl;
}
