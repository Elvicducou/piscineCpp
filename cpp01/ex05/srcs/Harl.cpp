//
// Created by Victor Ducoulombier on 26/11/2022.
//

#include "../includes/Harl.hpp"

Harl::Harl()
{
    std::cout << "constructor called" << std::endl;
}

Harl::~Harl()
{
    std::cout << "destructor called" << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string lvl_str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*actions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (lvl_str[i] == level)
        {
            (this->*actions[i])();
            return ;
        }
    }
    std::cout << "such command does not exists" << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-"
                 "triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put\
        enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for\
    years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[EROOR] This is unacceptable! I want to speak to the manager now." << std::endl;
}