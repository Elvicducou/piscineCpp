//
// Created by Victor Ducoulombier on 14/12/2022.
//

#ifndef CPP_SPAN_HPP
#define CPP_SPAN_HPP
#include <iostream>
#include <vector>

class Span {

private :

std::vector<int>	_arr;
unsigned int 	 	_N;
unsigned int		_maxfillednumbers;

public :

	class TooMuchNumberException : public std::exception
	{
		public :
		virtual const char	*what(void) const throw()
		{
			return ("too many number in array");
		}
	};

	class OutOfArrayException : public std::exception
	{
		public :
		virtual const char	*what(void) const throw()
		{
			return ("index requested not in array");
		}
	};

	class EmptyArrayException : public std::exception
	{
		public :
		virtual const char	*what(void) const throw()
		{
			return ("Not enough number in array !");
		}
	};

Span 				();
Span				(unsigned int N);
~Span				();
Span				&operator=(Span const &rhs);
Span				(Span const &rhs);
void				fillWithRandomNumbers(void);
void				printTheArray(void);
unsigned int		getN(void) const;
unsigned int		getMaxNumbers(void) const;
int					getValueByIndex(unsigned int index) const;
void				addNumber(int nb);
int					shortestSpan(void) const;
int					longestSpan(void) const;

};

std::ostream &operator<<(std::ostream &o, Span const &i);
#endif //CPP_SPAN_HPP
