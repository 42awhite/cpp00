#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class Phonebook
{
    private:
    Contact contacts[8];
    void modify_contact(int id);
    void print_contacts(void);
    void print_one_contact(int id);
    public:
    Phonebook(void);
    ~Phonebook(void);

};

#endif