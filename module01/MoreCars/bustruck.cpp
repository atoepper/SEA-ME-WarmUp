#include "bustruck.h"

BusTruck::BusTruck()
{
    std::cout << "Default BusTruck constructor called" << std::endl;
}

BusTruck::BusTruck(std::string brand, std::string model, unsigned int year, std::string capacity, unsigned int seats) : Car(brand, model, year), Bus(brand, model, year, seats), Truck(brand, model, year, capacity)
{
    std::cout << "BusTruck constructor called" << std::endl;
}

BusTruck::BusTruck(BusTruck &other) : Car(other), Bus(other), Truck(other)
{
    *this = other;
    std::cout << "Copy BusTruck constructor called" << std::endl;
}

BusTruck::~BusTruck()
{
    std::cout << "BusTruck destructor called" << std::endl;
}

BusTruck &BusTruck::operator=(BusTruck &other)
{
    this->_brand = other.getBrand();
    this->_model = other.getModel();
    this->_year = other.getYear();
    this->_seats = other.getSeats();
    this->_capacity = other.getCapacity();
    return (*this);
}

void    BusTruck::drive(void) const
{
    std::cout << "Driving " << this->getBrand() << ", model: " << this->getModel() << ", production year: " << this->getYear() << ", number of seats: " << this->getSeats() << ", capacity: " << this->getCapacity() << std::endl;
}
