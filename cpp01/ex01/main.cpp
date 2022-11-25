/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vducoulo <vducoulo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:37:03 by vducoulo          #+#    #+#             */
/*   Updated: 2022/11/24 01:37:24 by vducoulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int main(void)
{
    Zombie* zombies = zombieHorde(3, "Brendon");
    for (int i = 0;  i < 3; i++)
    {
        zombies[i].announce();
    }
    delete []zombies;
    return (0);
}