//
// Created by Victor Ducoulombier on 25/11/2022.
//

#include "../includes/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i].set_name(name);
    }
    return (&zombies[0]);
}