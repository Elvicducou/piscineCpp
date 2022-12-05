//
// Created by Victor Ducoulombier on 02/12/2022.
//

#include "../includes/Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Default constructor called for Dog" << std::endl;
}

Dog::Dog(std::string type) {
    this->type = "Dog";
    std::cout << "Constructor called for Dog" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

Dog::~Dog() {
    std::cout << "Destructor called for Dog" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Wouaf Wouaf !" << std::endl;
}