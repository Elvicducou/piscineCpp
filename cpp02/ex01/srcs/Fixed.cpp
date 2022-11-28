//
// Created by Victor Ducoulombier on 28/11/2022.
//

#include "../includes/Fixed.hpp"

Fixed::Fixed(void) : _value(0), _bits(8)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _bits(8)
{
    this->_value = n << this->_bits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n) : _bits(8)
{
    this->_value = roundf(n * (1 << this->_bits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) : _bits(8)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}

void Fixed::setRawBits(const int raw)
{
    this->_value = raw;
}

int Fixed::getRawBits() const
{
    return (this->_value);
}

float   Fixed::toFloat() const
{
    return ((float)this->_value / (float)(1 << this->_bits));
}

int   Fixed::toInt() const
{
    return (this->_value >> this->_bits);
}