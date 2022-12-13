#ifndef ITER_H
# define ITER_H

#include <iostream>

template <typename T>
void print(T &str, int last)
{
	if (!last)
		std::cout << str << ", ";
	else
		std::cout << str << std::endl;
}

template <typename T, typename J>
void iter(T *arr_addr, J arr_size, void (*f)(T &, int))
{
	for (int i = 0; i < arr_size - 1; i++)
	{
		f (arr_addr[i], 0);
	}
	f (arr_addr[arr_size - 1], 1);
}

#endif