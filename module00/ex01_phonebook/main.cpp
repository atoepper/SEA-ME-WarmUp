#include <QCoreApplication>
#include "phonebook.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Phonebook phonebook;
    std::string command;
    while(1)
    {
        std::cout << "Enter ADD, SEARCH, REMOVE, BOOKMARK or EXIT:" << std::endl;
        std::getline(std::cin, command);
        if (command == "EXIT")
            return(0);
        else if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
            phonebook.search();
        else if (command == "REMOVE")
            phonebook.remove();
        else if (command == "BOOKMARK")
            phonebook.listBookmarks();
        else if (command.length() == 0)
            return (0);
        else
            std::cout << "Invalid input" << std::endl;
    }
    return(0);
}
