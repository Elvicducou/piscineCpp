//
// Created by Victor Ducoulombier on 22/11/2022.
//

#include "../includes/PhoneBook.hpp"
#include <iostream>

std::string get_formated_search_line(std::string str)
{
    std::string todisplay;
    std::string fill_string;
    int fill_len;

    if (str.length() > 7)
    {
        str.resize(7);
        str.push_back('.');
    }
    fill_len = 9 - str.length();
    while (fill_len > 0)
    {
        str.push_back(' ');
        fill_len--;
    }
    return (str);
}

void    PhoneBook::display_full_contact_info(int index)
{
    Contact contact = this->contacts[index];
    std::cout << "First name : " << contact.get_fn() << std::endl;
    std::cout << "Last name : " << contact.get_ln() << std::endl;
    std::cout << "Nickname : " << contact.get_nn() << std::endl;
    std::cout << "Phone number : " << contact.get_pn() << std::endl;
    std::cout << "Darkest secret (bouhouhou) : " << contact.get_ds() << std::endl;
}

void    PhoneBook::display_single_contact(int index)
{
    Contact contact = this->contacts[index];
    if (!contact.get_fn().c_str()[0])
        return ;
    std::cout << "    " << index << "     | ";
    std::cout << get_formated_search_line(contact.get_fn()) << "| ";
    std::cout << get_formated_search_line(contact.get_ln()) << "| ";
    std::cout << get_formated_search_line(contact.get_nn()) << std::endl;
}

int justdigits(std::string str)
{
    for (size_t i = 0; i < strlen(str.c_str()); i++)
        if (!isdigit(str.c_str()[i]) && str.c_str()[i] != '+')
            return (0);
    return (1);
}

std::string get_cin_value(std::string prompt)
{
    std::string buff = "";
    while (1)
    {
        std::cout << prompt;
        std::getline(std::cin, buff);
        if (!std::cin)
            exit (EXIT_FAILURE);
        if (!buff.compare(""))
            std::cout << "field can't be empty, please type a value" << std::endl;
        else if ((!prompt.compare("CONTACT PHONE NUMBER >>") || !prompt.compare("ID TO INVESTIGATE >> "))
                && !justdigits(buff))
            std::cout << "input must only contains digits " << std::endl;
        else
            break ;
    }
    return (buff);
}

int PhoneBook::set_current_index(int index)
{
    this->current_index = index;
    return (this->current_index);
}

int PhoneBook::search_contact()
{
    int user_choice;

    if (this->contacts[0].get_fn() == "")
    {
        std::cout << "No contacts, quitting search menu." << std::endl;
        return (1);
    }
    std::cout << "searching contact" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << "    ID    | FIRST_NA | LAST_NA  | NICKNAME " << std::endl;
    for (int i = 0; i <= 7; i++)
        this->display_single_contact(i);
    user_choice = atoi(get_cin_value("ID TO INVESTIGATE >> ").c_str());
    if (user_choice < 0 || user_choice > 7 || this->contacts[user_choice].get_fn() == "")
        std::cout << "We've ask for a real index, you donkey. Quitting Search menu." << std::endl;
    else
        display_full_contact_info(user_choice);
    return (0);
}

int PhoneBook::add_contact()
{
    std::string buff;
    Contact     contact;

    std::cout << "You're about to add a contact" << std::endl;
    contact.set_fn(get_cin_value("CONTACT FIRST NAME >>"));
    contact.set_ln(get_cin_value("CONTACT LAST NAME >>"));
    contact.set_nn(get_cin_value("CONTACT NICKNAME >>"));
    contact.set_pn(get_cin_value("CONTACT PHONE NUMBER >>"));
    contact.set_ds(get_cin_value("CONTACT DARK SECRET >>"));
    this->contacts[this->current_index] = contact;
    if (this->current_index < 7)
        this->current_index++;
    else
        this->current_index = 0;
    std::cout << "Successfully added " << contact.get_fn()
    << " in contact list" << std::endl;
    return (0);
}