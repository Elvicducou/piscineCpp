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
    Fixed      (void);
    Fixed      (int const n);
    Fixed      (float const n);
    Fixed      (Fixed const &src);
    ~Fixed     ();
    Fixed      &operator=(Fixed const &rhs);
    int        getRawBits(void) const;
    void       setRawBits(int const raw);
    float      toFloat(void) const;
    int        toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif //CPP_FIXED_HPP
