#ifndef BUS_H
#define BUS_H

#include "car.h"

class Bus : virtual public Car
{
protected:
    unsigned int    _seats;
public:
    Bus();
    Bus(std::string brand, std::string model, unsigned int year, unsigned int seats);
    Bus(Bus &other);
    virtual ~Bus();

    Bus &operator=(Bus &other);

    unsigned int    getSeats(void) const;
    void   drive(void) const override;
};

#endif // BUS_H
