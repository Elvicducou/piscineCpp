//
// Created by Victor Ducoulombier on 02/12/2022.
//

#include "../includes/WrongAnimal.hpp"


WrongAnimal::WrongAnimal() :type("WrongAnimal") {
    std::cout << "Default constructor called for WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
    std::cout << "Constructor called for WrongAnimal" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor called for WrongAnimal" << std::endl;
}

//functions

void WrongAnimal::makeSound() const
{
	std::cout << "*** Wrong ANimAl Noises ***" << std::endl;
}

std::string WrongAnimal::getType() const {
    return (type);
}