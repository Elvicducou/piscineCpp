
#include "../includes/ClapTrap.hpp"

int main( void )
{
    ClapTrap a(std::string("vducoulo"));
    ClapTrap b(std::string("enemy"));
    a.attack(b.getName());
    b.takeDamage(8);
    b.attack(a.getName());
    b.attack(a.getName());
    b.attack(a.getName());
    b.attack(a.getName());
    b.attack(a.getName());
    b.attack(a.getName());
    b.attack(a.getName());
    b.attack(a.getName());
    b.attack(a.getName());
    b.attack(a.getName());
    b.attack(a.getName());
    b.attack(a.getName());
    b.attack(a.getName());
    b.beRepaired(110);
    b = a;
    b.attack(a.getName());
    a.takeDamage(2);

    return (0);
}