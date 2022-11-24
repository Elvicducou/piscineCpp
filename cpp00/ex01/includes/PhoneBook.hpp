//
// Created by Victor Ducoulombier on 22/11/2022.
//

#ifndef CPP_PHONEBOOK_H
#define CPP_PHONEBOOK_H
#include "Contact.hpp"
#include <iostream>

class PhoneBook {
private :
    Contact         contacts[8];
    std::string     name;
    int             current_index;
public :
    int     add_contact(void);
    int     search_contact(void);
    int     set_current_index(int index);
    void    display_single_contact(int index);
    void    display_full_contact_info(int index);
};


#endif //CPP_PHONEBOOK_H
