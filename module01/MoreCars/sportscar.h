#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "car.h"

class SportsCar : public Car
{
protected:
    unsigned int    _maxSpeed;
public:
    SportsCar();
    SportsCar(std::string brand, std::string model, unsigned int year, unsigned int speed);
    SportsCar(SportsCar &other);
    virtual ~SportsCar();

    SportsCar &operator=(SportsCar &other);
    unsigned int    getSpeed(void) const;
    void    drive(void) const override;
};

#endif // SPORTSCAR_H
