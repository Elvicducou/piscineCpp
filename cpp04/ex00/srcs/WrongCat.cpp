//
// Created by Victor Ducoulombier on 02/12/2022.
//

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "Default constructor called for WrongCat" << std::endl;
}

WrongCat::WrongCat(std::string type) {
    std::cout << "Constructor called for WrongCat" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "Destructor called for WrongCat" << std::endl;
}