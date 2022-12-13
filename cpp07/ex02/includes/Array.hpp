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
	Array<T>			() : _arr(new T[0]), _size(0) {};
	Array<T>			(unsigned int n) : _arr(new T[n]), _size(n) {};
	~Array<T>			() {delete[] _arr;};
	unsigned int	 	size() const {return _size;};

	void				setValue(T value, unsigned int index) {
		if (index >= _size)
			throw Array::IndexOutOfRangeException();
		_arr[index] = value;
	};
	T					getValue(unsigned int index) const {
		if (index >= _size)
			throw Array::IndexOutOfRangeException();
		return _arr[index];
	};

	class	IndexOutOfRangeException : public std::exception
	{
		public :
		virtual const char	*what(void) const throw()
		{
			return ("the provided index is out of range");
		}
	};

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
		_arr = new T[rhs._size], _size = rhs._size;
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = rhs._arr[i];
	}

	T	&operator[](unsigned int index)
	{
		if (index >= _size)
			throw Array::IndexOutOfRangeException();
		return _arr[index];
	};

};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &i)
{
	o << "printing Array of size " << i.size() << " : " << std::endl;
	for (unsigned x = 0; x < i.size(); x++)
		o << "[" << x << "] : " << i.getValue(x) << ", ";
	o << std::endl;
	return (o);
}
#endif //CPP_ARRAY_HPP
