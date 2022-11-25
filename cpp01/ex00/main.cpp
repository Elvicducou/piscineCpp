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
    randomChump("Brendon le zonzon");
    Zombie *edgar_zomb = newZombie("Edgar");
    edgar_zomb->announce();
    delete(edgar_zomb);
}