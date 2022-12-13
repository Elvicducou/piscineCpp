//
// Created by Victor Ducoulombier on 13/12/2022.
//

#ifndef CPP_ARRAY_HPP
#define CPP_ARRAY_HPP
#include <iostream>

template <typename T>
class Array {
private : 
T 							*_arr;
unsigned int				_size;

public :

	class	IndexOutOfRangeException : public std::exception
	{
		public :
		virtual const char	*what(void) const throw()
		{
			return ("the provided index is out of range");
		}
	};

	Array<T>			() : _arr(new T[0]), _size(0) {std::cout << "called" << std::endl;};
	Array<T>			(unsigned int n) : _arr(new T[n]), _size(n) {};
	~Array<T>			() {delete[] _arr;};
	unsigned int	 	size() const {return _size;};
	void				setValue(T value, unsigned int index) {_arr[index] = value;};
	Array<T>	&operator=(const Array<T> &rhs)
	{
		if (this == &rhs)
			return (*this);
		if (_size)
			delete[] _arr;
		_arr = new T[rhs._size], _size = rhs._size;
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = rhs._arr[i];
		return (*this);
	}

	Array<T>	(const Array<T> &rhs)
	{
		if (_size)
			delete[] _arr;
		_arr = new T[rhs._size], _size = rhs._size;
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = rhs._arr[i];
	}

	T	&operator[](unsigned int index)
	{
		std::cout << "called";
		if (index >= _size)
			throw Array::IndexOutOfRangeException();
		return _arr[index];
	};

};

#endif //CPP_ARRAY_HPP
