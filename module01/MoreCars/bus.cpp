#include "bus.h"

Bus::Bus()
{
    std::cout << "Default Bus constructor called" << std::endl;
}

Bus::Bus(std::string brand, std::string model, unsigned int year, unsigned int seats) : Car(brand, model, year), _seats(seats)
{
    std::cout << "Bus constructor called" << std::endl;
}

Bus::Bus(Bus &other) : Car(other), _seats(other.getSeats())
{
    std::cout << "Copy Bus constructor called" << std::endl;
}

Bus::~Bus()
{
    std::cout << "Bus destructor called" << std::endl;
}

Bus &Bus::operator=(Bus &other)
{
    this->_brand = other.getBrand();
    this->_model = other.getModel();
    this->_year = other.getYear();
    this->_seats = other.getSeats();
    return (*this);
}

unsigned int    Bus::getSeats() const
{
    return(this->_seats);
}

void    Bus::drive(void) const
{
    std::cout << "Driving " << this->getBrand() << ", model: " << this->getModel() << ", production year: " << this->getYear() << ", number of seats: " << this->getSeats() << std::endl;
}
