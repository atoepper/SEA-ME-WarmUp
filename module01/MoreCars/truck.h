#ifndef TRUCK_H
#define TRUCK_H

#include "car.h"

class Truck : virtual public Car
{
protected:
    std::string    _capacity;
public:
    Truck();
    Truck(std::string brand, std::string model, unsigned int year, std::string capacity);
    Truck(Truck &other);
    virtual ~Truck();

    Truck &operator=(Truck &other);
    std::string getCapacity(void) const;
    void    drive(void) const override;
};

#endif // TRUCK_H
