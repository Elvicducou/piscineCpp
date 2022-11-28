//
// Created by Victor Ducoulombier on 28/11/2022.
//

#include "../includes/Fixed.hpp"

    // CONSTRUCTORS AND DESTRUCTORS ***********************

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

    // FUNCTIONS **********************************

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

/*
 *              OPERATOR OVERLOAD
 */

bool Fixed::operator>(Fixed const &rhs) const
{
    return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<(Fixed const &rhs) const
{
    return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
    return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
    return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator==(Fixed const &rhs) const
{
    return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
    return (this->toFloat() != rhs.toFloat());
}

    // ARITHMETICS *********************************

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return (*this);
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
    return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
    return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
    return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
    return (this->toFloat() / rhs.toFloat());
}

    // INCREMENTS ****************************

Fixed &Fixed::operator++(void)
{
    this->_value++;
    return (*this);
}

Fixed Fixed::operator++(int n)
{
    Fixed tmp = *this;
    ++*this;
    return (tmp);
}

Fixed &Fixed::operator--(void)
{
    this->_value--;
    return (*this);
}

Fixed Fixed::operator--(int n)
{
    Fixed tmp = *this;
    --*this;
    return (tmp);
}

    // FUNCTIONS **************************

Fixed Fixed::min(Fixed &nb1, Fixed &nb2)
{
    if (nb1 < nb2)
        return (nb1);
    return (nb2);
}

Fixed Fixed::min(Fixed const &nb1, Fixed const &nb2)
{
    if (nb1 < nb2)
        return (nb1);
    return (nb2);
}

Fixed Fixed::max(Fixed &nb1, Fixed &nb2)
{
    if (nb1 > nb2)
        return (nb1);
    return (nb2);
}

Fixed Fixed::max(Fixed const &nb1, Fixed const &nb2)
{
    if (nb1 > nb2)
        return (nb1);
    return (nb2);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}

