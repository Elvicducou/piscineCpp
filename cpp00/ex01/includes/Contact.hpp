//
// Created by Victor Ducoulombier on 22/11/2022.
//

#ifndef CPP_CONTACT_H
#define CPP_CONTACT_H
#include <iostream>

//first name, last name, nickname, phone number, and
//darkest secret.
class Contact {
private :
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _dark_s;

public :
    void           set_fn(std::string first_n);
    void           set_ln(std::string last_n);
    void           set_pn(std::string phone_n);
    void           set_nn(std::string nick_n);
    void           set_ds(std::string dark_s);
    std::string    get_fn(void);
    std::string    get_ln(void);
    std::string    get_pn(void);
    std::string    get_nn(void);
    std::string    get_ds(void);
};


#endif //CPP_CONTACT_Hvoid