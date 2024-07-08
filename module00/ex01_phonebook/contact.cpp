#include "contact.h"

Contact::Contact() : bookmark(false) {}

Contact::Contact(const Contact &other) : _name(other.getName()), _number(other.getNumber()), _nick(other.getNick()) {}

Contact::Contact(const std::string &name, const std::string &number, const std::string &nick)
    : _name(name), _number(number), _nick(nick), bookmark(false) { }

Contact::~Contact() {}

/* operator overload */

Contact     &Contact::operator=(const Contact &other)
{
    this->_name = other.getName();
    this->_number = other.getNumber();
    this->_nick = other.getNick();
    this->bookmark = other.bookmark;
    return (*this);
}

/* setters */

void    Contact::setName(const std::string &name)
{
    this->_name = name;
}

void    Contact::setNick(const std::string &nick)
{
    this->_nick = nick;
}

void    Contact::setNumber(const std::string &number)
{
    this->_number = number;
}

/* getters */


std::string Contact::getName() const
{
    return(this->_name);
}

std::string Contact::getNumber() const
{
    return(this->_number);
}

std::string Contact::getNick() const
{
    return(this->_nick);
}

void    Contact::displayContact() const
{
    std::cout << "Name: " << this->_name << std::endl;
    std::cout << "Nickname: " <<this->_nick << std::endl;
    std::cout << "Phone number: " <<this->_number << std::endl;
}

void    Contact::displayContactColumn() const
{
    std::cout << std::setw(10) << (_name.length() > 10 ? _name.substr(0, 9) + "." : _name) << "|";
    std::cout << std::setw(10) << (_nick.length() > 10 ? _nick.substr(0, 9) + "." : _nick) << std::endl;
}
