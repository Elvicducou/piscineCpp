//
// Created by Victor Ducoulombier on 14/12/2022.
//

#include "../includes/Span.hpp"
#include <algorithm>

Span::Span () : _N(0), _maxfillednumbers(0) { _arr.reserve(0);}
Span::Span(unsigned int N) : _N(N), _maxfillednumbers(0) { _arr.reserve(N); }
Span::Span(Span const &rhs) {*this = rhs;}
unsigned int Span::getMaxNumbers(void) const {return _maxfillednumbers;}
Span::~Span(){ }
unsigned int Span::getN(void) const { return _N;}

Span &Span::operator=(Span const &rhs)
{ 
	if (&rhs == this)
		return(*this);
	_N = rhs._N;
	_arr = rhs._arr;
	_maxfillednumbers = rhs._maxfillednumbers;
	return (*this); 
}

void Span::fillWithRandomNumbers(void)
{
	srand(time(NULL));
	for (unsigned int i = _maxfillednumbers; i < _arr.capacity(); i++)
	{
		_arr.push_back(rand()%10000);
		_maxfillednumbers++;
	}
	return ;
}

void Span::addNumber(int nb)
{
	if (_maxfillednumbers >= _N)
		throw Span::TooMuchNumberException();
		_maxfillednumbers++;
	_arr.push_back(nb);
}

int Span::shortestSpan(void) const
{
	if (_maxfillednumbers < 2)
		throw EmptyArrayException();
	std::vector<int>::const_iterator iter;
	int lowest = *std::min_element(_arr.begin(), _arr.end());
	int tmp = *std::max_element(_arr.begin(), _arr.end());
	for (iter = _arr.begin(); iter != _arr.end(); iter++)
	{
		if (*iter < tmp && *iter != lowest)
			tmp = *iter;
	}
	return (tmp - lowest - 1);
}

int Span::longestSpan(void) const
{
	if (_maxfillednumbers < 2)
		throw EmptyArrayException();
	int lowest = *std::min_element(_arr.begin(), _arr.end());
	int max = *std::max_element(_arr.begin(), _arr.end());
	return (max - lowest);
}

void Span::printTheArray(void)
{
	if (!_N)
		std::cout << "Array has no value !" << std::endl;
	for (unsigned int i = 0; i < _N; i++)
	{
		std::cout << _arr[i] << ", ";
	}
	std::cout << std::endl;
	return ;
}

int Span::getValueByIndex(unsigned int index) const
{
	if (index > _N || index > _maxfillednumbers)
		throw Span::OutOfArrayException();
	return (_arr[index]);
}