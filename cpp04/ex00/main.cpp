
#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
    std::cout << std::endl <<"*** CONSTRUCTORS ***" << std::endl << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* f = new WrongCat();
    const WrongCat*    wc = new WrongCat();

    std::cout << std::endl << " **** TYPES ****" << std::endl << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << std::endl;
    std::cout << f->getType() << std::endl;
    std::cout << wc->getType() << std::endl;
    std::cout << std::endl <<"*** NOISES ***" << std::endl << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    f->makeSound();
    wc->makeSound();
    std::cout << std::endl <<"*** DESTRUCTORS ***" << std::endl << std::endl;
    delete meta, delete i, delete j, delete f, delete wc;
    return 0;
}