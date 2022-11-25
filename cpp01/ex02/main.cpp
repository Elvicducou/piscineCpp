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

# include <iostream>
# include <string>

int main(void)
{
    std::string     base_str = "HI THIS IS BRAIN";
    std::string    *stringPTR = &base_str;
    std::string    &stringREF = base_str;
    std::cout << "base_str addr    : " << &base_str << std::endl;
    std::cout << "stringPTR addr   : " << stringPTR << std::endl;
    std::cout << "stringREF addr   : " << &base_str << std::endl;
    std::cout << "base_str value   : "<< base_str << std::endl;
    std::cout << "stringPTR value  : "<< *stringPTR << std::endl;
    std::cout << "stringREF value  : "<< stringREF << std::endl;
}