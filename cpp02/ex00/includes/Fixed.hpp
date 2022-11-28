//
// Created by Victor Ducoulombier on 28/11/2022.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP
# include <iostream>

class Fixed {
private :
    int               _value;
    static const int _bits = 8;
public :
    Fixed      ();
    Fixed      (Fixed const &src);
    ~Fixed     ();
    Fixed      &operator=(Fixed const &rhs);
    int        getRawBits(void) const;
    void       setRawBits(int const raw);
};


#endif //CPP_FIXED_HPP
