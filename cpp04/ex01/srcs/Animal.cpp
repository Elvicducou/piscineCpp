//
// Created by Victor Ducoulombier on 02/12/2022.
//

#include "../includes/Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Default constructor called for Animal" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
    std::cout << "Constructor called for Animal" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
    std::cout << "ANIMAL COPY !!!!!!!!" << std::endl;
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

Animal::~Animal() {
    std::cout << "Destructor called for Animal" << std::endl;
}

//functions

void Animal::makeSound() const
{
    if (!type.compare("Dog"))
        std::cout << "Wouaf Wouaf !" << std::endl;
    else if (!type.compare("Cat"))
        std::cout << "Miaou Miaou !" << std::endl;
}

std::string Animal::getType() const {
    return (type);
}