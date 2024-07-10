#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <cstring>

class Car
{
private:
    std::string     _name;
    unsigned int    _speed;
public:
    Car();
    Car(std::string name, unsigned int speed);
    Car(Car &other);
    ~Car();

    Car &operator=(Car &other);
    std::string     getName(void) const;
    unsigned int    getSpeed(void) const;
};

#endif // CAR_H
