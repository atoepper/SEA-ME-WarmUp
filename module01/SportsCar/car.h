#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <cstring>

class Car
{
protected:
    std::string     _brand;
    std::string     _model;
    unsigned int    _year;
public:
    Car();
    Car(std::string brand, std::string model, unsigned int year);
    Car(Car &other);
    virtual ~Car();

    Car &operator=(Car &other);
    std::string getBrand(void) const;
    std::string getModel(void) const;
    unsigned int    getYear(void) const;
    void    drive(void) const;
};

#endif // CAR_H
