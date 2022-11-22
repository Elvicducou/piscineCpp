/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vducoulo <vducoulo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:24:28 by vducoulo          #+#    #+#             */
/*   Updated: 2022/11/22 12:49:21 by vducoulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    print_in_upper(char *str)
{
    for (int i = 0; i < std::strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            std::putchar(std::toupper(str[i]));
        else
            std::cout << str[i];
    }
}

int	main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            print_in_upper(argv[i]);
        }
    }
}