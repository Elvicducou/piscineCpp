
#include <iostream>
template <typename T>
void swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
	return;
}

template <typename T>
T &min(T &a, T &b)
{
	return (a <= b ? a : b);
}

template <typename T>
T &max(T &a, T &b)
{
	return (a <= b ? b : a);
}

int main(void)
{
	int a = 9, b = 12;
	std::cout << "before swap : " << "a : " << a << ", b : " << b << std::endl;
	swap<int>(a, b);
	std::cout << "after swap : " << "a : " << a << ", b : " << b << std::endl;
	std::cout << std::endl;
	std::cout << "min value : " << min(a, b) << std::endl;
	std::cout << "max value : " << max(a, b) << std::endl;

	a = 2;
	b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}