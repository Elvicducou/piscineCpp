/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vducoulo <vducoulo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:35:02 by vducoulo          #+#    #+#             */
/*   Updated: 2022/11/24 01:35:28 by vducoulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void    Zombie::set_name(std::string name)
{
    this->_name = name;
}

Zombie::Zombie()
{
    std::cout << " 🍼🍼🍼  Constructor called for a new zombie " << std::endl;
}

Zombie::~Zombie()
{
    std::cout << " 🪦🪦🪦  Destructor called for " << this->_name << std::endl;
}
void Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}