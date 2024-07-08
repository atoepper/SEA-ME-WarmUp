#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>
#include <cstring>

class Contact
{
private:
    std::string _name;
    std::string _number;
    std::string _nick;
public:
    Contact();
    Contact(const Contact &other);
    Contact(const std::string &name, const std::string &number, const std::string &nick);
    ~Contact();
    Contact     &operator=(const Contact &other);

    void        setName(const std::string &name);
    void        setNumber(const std::string &number);
    void        setNick(const std::string &nick);

    std::string getName(void) const;
    std::string getNumber(void) const;
    std::string getNick(void) const;
    bool        bookmark;
    void        displayContact(void) const;
    void        displayContactColumn(void) const;
};

#endif // CONTACT_H
