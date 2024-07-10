#ifndef BUSTRUCK_H
#define BUSTRUCK_H

#include "bus.h"
#include "truck.h"

class BusTruck : virtual public Truck, virtual public Bus
{
private:
    std::string    _capacity;
public:
    BusTruck();
    BusTruck(std::string brand, std::string model, unsigned int year, std::string capacity, unsigned int seats);
    BusTruck(BusTruck &other);
    virtual ~BusTruck();

    BusTruck &operator=(BusTruck &other);
    void    drive(void) const override;
};

#endif // BUSTRUCK_H
