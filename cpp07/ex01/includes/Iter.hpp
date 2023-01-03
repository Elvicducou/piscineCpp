#ifndef ITER_H
# define ITER_H

#include <iostream>

template <typename T>
void print(T const &str)
{
	std::cout << str << ", ";
}

template <typename T, typename J>
void iter(T *arr_addr, J arr_size, void (*f)(T const &))
{
	for (int i = 0; i < arr_size; i++)
	{
		f (arr_addr[i]);
	}
}

#endif