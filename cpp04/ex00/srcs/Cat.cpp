//
// Created by Victor Ducoulombier on 02/12/2022.
//

#include "../includes/Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Default constructor called for cat" << std::endl;
}

Cat::Cat(std::string type) {
    this->type = "Cat";
    std::cout << "Constructor called for cat" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

Cat::~Cat() {
    std::cout << "Destructor called for cat" << std::endl;
}

// functions


