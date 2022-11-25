/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vducoulo <vducoulo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:35:09 by vducoulo          #+#    #+#             */
/*   Updated: 2022/11/24 01:36:26 by vducoulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_ZOMBIE_H
#define CPP_ZOMBIE_H
#include <iostream>

class Zombie 
{
private :
    std::string _name;
public :
    void    announce(void);
    void    set_name(std::string name);
    Zombie  ();
    ~Zombie ();
};

Zombie* zombieHorde( int N, std::string name );

#endif