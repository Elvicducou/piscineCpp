
#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"

int main( void )
{
    FragTrap a(std::string("vducoulo"));
    ClapTrap b(std::string("enemy"));
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.highFivesGuys();
    b.takeDamage(80);
    b.attack(a.getName());
    a.takeDamage(90);
    a.attack(b.getName());
    b.beRepaired(110);
    b.attack(a.getName());
    a.takeDamage(19);

    return (0);
}