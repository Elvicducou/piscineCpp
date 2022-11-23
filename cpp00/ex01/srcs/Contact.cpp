//
// Created by Victor Ducoulombier on 22/11/2022.
//

#include "../includes/Contact.hpp"

void    Contact::set_fn(std::string first_n)
{
    this->_first_name = first_n;
}

void    Contact::set_ln(std::string last_n)
{
    this->_last_name = last_n;
}

void    Contact::set_pn(std::string phone_n)
{
    this->_phone_number = phone_n;
}

void    Contact::set_nn(std::string nick_n)
{
    this->_nickname = nick_n;
}

void    Contact::set_ds(std::string dark_s)
{
    this->_dark_s = dark_s;
}

std::string    Contact::get_fn(void)
{
    return (this->_first_name);
}

std::string    Contact::get_ln(void)
{
    return (this->_last_name);
}

std::string    Contact::get_pn(void)
{
    return (this->_phone_number);
}

std::string    Contact::get_nn(void)
{
    return (this->_nickname);
}

std::string    Contact::get_ds(void)
{
    return (this->_dark_s);
}
