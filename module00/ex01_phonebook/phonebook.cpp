#include "phonebook.h"

Phonebook::Phonebook()
{
    std::cout << "Welcome to PHONY the pretty practical phonebook application!" << std::endl;
}

Phonebook::~Phonebook()
{

}

void Phonebook::add()
{
    std::string buffer;
    Contact     newContact;
    std::cout << "Enter name: ";
    std::getline(std::cin, buffer);
    newContact.setName(buffer);
    std::cout << "Enter number: ";
    std::getline(std::cin, buffer);
    newContact.setNumber(buffer);
    std::cout << "Enter nick name: ";
    std::getline(std::cin, buffer);
    newContact.setNick(buffer);
    this->_contacts.push_back(newContact);
}

void Phonebook::remove()
{
    std::string input;
    int         id;

    if (_contacts.empty())
    {
        std::cout << "No entries to remove" << std::endl;
        return;
    }
    std::cout << "Remove contact via id or number? (ID/NUMBER) Enter CANCEL to cancel" << std::endl;
    std::getline(std::cin, input);
    while(input != "ID" && input != "NUMBER" && input != "CANCEL")
    {
        std::cout << "Invalid Input. Enter ID/NUMBER/CANCEL" << std::endl;
        std::getline(std::cin, input);
    }
    if (input == "ID")
    {
        this->_remove_viaID();
        return;
    }
    else if (input == "NUMBER")
    {
        this->_remove_viaNumber();
        return;
    }
}

void    Phonebook::_remove_viaID(void)
{
    size_t id;
    std::cout << "Enter the ID of the contact you want to remove" << std::endl;
    while (!(std::cin >> id) || id < 1 || id > static_cast<int>(this->_contacts.size()))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "No valid ID. Enter a valid ID";
    }
    _contacts.erase(_contacts.begin() + id - 1);
    std::cout << "Contact successfully removed" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void    Phonebook::_remove_viaNumber(void)
{
    std::string input;
    std::cout << "Enter the number of the contact you want to remove" << std::endl;
    std::getline(std::cin, input);
    auto it = std::remove_if(_contacts.begin(), _contacts.end(),
                             [&input](const Contact& contact) {
                                 return contact.getNumber() == input;
                             });

    if (it != _contacts.end())
    {
        _contacts.erase(it, _contacts.end());
        std::cout << "Contact removed successfully." << std::endl;
    }
    else
        std::cout << "Contact with number " << input << " not found." << std::endl;
}

void Phonebook::listContacts()
{
    if (this->_contacts.empty())
        std::cout << "No entries" << std::endl;
    else
        for (size_t i = 0; i < this->_contacts.size(); i++)
        {
            std::cout << std::setw(4) << i + 1 << "|";
            this->_contacts[i].displayContactColumn();
        }

}

void Phonebook::listBookmarks()
{
    if (_contacts.empty())
    {
        std::cout << "No bookmarks set" << std::endl;
        return;
    }
    for (size_t i = 0; i < this->_contacts.size(); i++)
        if(this->_contacts[i].bookmark)
        {
            std::cout << std::setw(4) << i + 1 << "|";
            this->_contacts[i].displayContactColumn();
        }
}

void Phonebook::search()
{
    size_t     id;
    char    command;

    if (this->_contacts.size() == 0)
    {
        std::cout << "No entries" << std::endl;
        return;
    }
    listContacts();
    std::cout << "Enter ID to show details: ";
    while (!(std::cin >> id) || id < 1 || id > _contacts.size()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "No valid ID. Enter a valid ID: ";
    }
    _contacts[id - 1].displayContact();
    std::cout << "Bookmark? (y/n): ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> command;
    if (command == 'y' || command == 'Y') {
        _contacts[id - 1].bookmark = true;
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


/*     std::cout << "Enter ID to show details:";
    while (!(std::cin >> id) || id < 1 || id > static_cast<int>(this->_contacts.size()))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "No valid ID. Enter a valid ID to show details: ";
    }
    this->_contacts[id - 1].displayContact();
    std::cout << "Bookmark? (y/n)";
    std::cin >> command;
    if (command == 'y')
        this->_contacts[id - 1].bookmark = true; */
