
#include <iostream>
#include <vector>

template <typename T>
int easyfind(T &vec, int n)
{
	typename T::const_iterator iter;
	for (iter = vec.begin(); iter != vec.end(); iter++)
		if (*iter == n)
			return (1);
	return (0);
}

int main(void)
{
	std::vector<int> vec;
	srand(time(NULL));
	for (int i = 0; i < 36; i++)
		vec.push_back(rand()%100);
	if (easyfind(vec, 66))
		std::cout << "The number provided is present in the vector !" << std::endl;
	else
		std::cout << "The number provided is not present in the vector !" << std::endl;
	return (0);
}