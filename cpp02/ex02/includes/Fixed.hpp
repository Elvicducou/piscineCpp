//
// Created by Victor Ducoulombier on 28/11/2022.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
private :
    int               _value;
    int const         _bits;
public :
    // CONSTRUCTORS AND DESTRUCTORS
    Fixed      (void);
    Fixed      (int const n);
    Fixed      (float const n);
    Fixed      (Fixed const &src);
    ~Fixed     ();

    //OPERATORS OVERLOAD
        // COMPARISON
    bool      operator>(Fixed const &rhs) const;
    bool      operator<(Fixed const &rhs) const;
    bool      operator>=(Fixed const &rhs) const;
    bool      operator<=(Fixed const &rhs) const;
    bool      operator==(Fixed const &rhs) const;
    bool      operator!=(Fixed const &rhs) const;

        // ARITHMETICS
    Fixed      &operator=(Fixed const &rhs);
    Fixed      operator+(Fixed const &rhs) const;
    Fixed      operator-(Fixed const &rhs) const;
    Fixed      operator*(Fixed const &rhs) const;
    Fixed      operator/(Fixed const &rhs) const;

        // INCREMENTS
    Fixed      &operator++(void); //prefix
    Fixed      operator++(int n); //postfix
    Fixed      &operator--(void); //prefix
    Fixed      operator--(int); //postfix

    // FUNCTIONS
    static  Fixed   min(Fixed &nb1, Fixed &nb2);
    static  Fixed   min(Fixed const &nb1, Fixed const &nb2);
    static  Fixed   max(Fixed &nb1, Fixed &nb2);
    static  Fixed   max(Fixed const &nb1, Fixed const &nb2);
    int        getRawBits(void) const;
    void       setRawBits(int const raw);
    float      toFloat(void) const;
    int        toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif //CPP_FIXED_HPP
