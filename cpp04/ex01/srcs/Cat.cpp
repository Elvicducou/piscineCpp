//
// Created by Victor Ducoulombier on 02/12/2022.
//

#include "../includes/Cat.hpp"
#include "../includes/project.h"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Default constructor called for cat" << std::endl;
    this->ownbrain = new Brain();
}

Cat::Cat(std::string type) {
    this->type = type;
    std::cout << "Constructor called for cat" << std::endl;
    this->ownbrain = new Brain();
}

Cat &Cat::operator=(const Cat &rhs) {
    if (this == &rhs)
        return (*this);
    type = rhs.type;
    brain_exchanger(*ownbrain, *rhs.ownbrain);
    return (*this);
}

Cat::~Cat() {
    delete ownbrain;
    std::cout << "Destructor called for cat" << std::endl;
}

void Cat::print_my_ideas(void)
{
  std::cout << "[IDEA]" << " from Cat : ";
  for (int i = 0; i < 100; i++)
    if (!ownbrain->ideas[i].empty())
        std::cout << "I'm a cat, I think that " << ownbrain->ideas[i] << std::endl;
}



