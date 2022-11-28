//
// Created by Victor Ducoulombier on 26/11/2022.
//

#ifndef CPP_HARL_HPP
#define CPP_HARL_HPP
#include <iostream>

class   Harl {
private :
    void        debug( void );
    void        info( void );
    void        warning( void );
    void        error( void );
public :
    Harl        ();
    ~Harl       ();
    void        complain( std::string level );
};


#endif //CPP_HARL_HPP
