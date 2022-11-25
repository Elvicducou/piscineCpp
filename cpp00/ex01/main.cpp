
#include "includes/PhoneBook.hpp"

void    print_welcome_message(void)
{
    std::cout << "\n*****************************" << std::endl;
    std::cout << "welcome to vducoulo's Phonebook, if not working, "
                 "please keep in mind it's a feature, not a bug" << std::endl;
    std::cout << "*****************************\n" << std::endl;
}

int main(void)
{
    std::string buff;
    PhoneBook   pb;

    pb.set_current_index(0);
    print_welcome_message();
    while (1)
    {
        std::cout << "COMMAND >> ";
        std::getline(std::cin, buff);
        if (!buff.compare("EXIT") || !std::cin)
            break;
        else if (!buff.compare("ADD"))
            pb.add_contact();
        else if (!buff.compare("SEARCH"))
            pb.search_contact();
        else
            std::cout << "Wrong command" << std::endl;
    }
    std::cout << "bye !" << std::endl;
}