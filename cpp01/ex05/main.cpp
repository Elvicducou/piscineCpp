
#include "../includes/Harl.hpp"

int main (void)
{
    Harl harl;
    harl.complain(std::string("DEBUG"));
    harl.complain(std::string("INFO"));
    harl.complain(std::string("WARNING"));
    harl.complain(std::string("ERROR"));
    harl.complain(std::string("WARNING"));
    harl.complain(std::string("badcommand"));
}