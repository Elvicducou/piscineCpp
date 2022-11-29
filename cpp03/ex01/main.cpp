
#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main( void )
{
    ScavTrap a(std::string("vducoulo"));
    ClapTrap b(std::string("enemy"));
    a.attack(b.getName());
    b.takeDamage(8);
    b.attack(a.getName());
    a.takeDamage(1);
    b.beRepaired(110);
    b.attack(a.getName());
    a.guardGate();
    a.takeDamage(2);

    return (0);
}