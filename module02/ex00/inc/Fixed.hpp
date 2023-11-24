#ifndef FIXED_HPP
#define FIXED_HPP

#include "colors.hpp"
#include <iostream>
#include <string>

#define DEBUG 1

class Fixed {

public:

    Fixed();

    Fixed(std::string);
    Fixed(int);
    Fixed(float);

    Fixed(const Fixed &);

    Fixed &operator=(const Fixed &);

    ~Fixed();

private:

    int _nb;
    float _floatNb;
    std::string _name;

};

#endif // !FIXED_HPP
