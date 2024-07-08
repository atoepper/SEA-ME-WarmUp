#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.h"
#include <iomanip>
#include <vector>
#include <algorithm>

class Phonebook
{
private:
    void    _remove_viaID(void);
    void    _remove_viaNumber(void);
    std::vector<Contact>    _contacts;
public:
    Phonebook();
    ~Phonebook();

    void    add();
    void    remove();
    void    search();
    void    bookmark(int id);
    void    listContacts(void);
    void    listBookmarks(void);
};

#endif // PHONEBOOK_H
