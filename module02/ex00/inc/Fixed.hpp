#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{

    public:

      Fixed();
      Fixed(const Fixed &) = default;
      Fixed &operator=(const Fixed &) = default;
      ~Fixed();

    private:

};

Fixed ::Fixed() {}

Fixed ::~Fixed() {}

#endif // !FIXED_HPP
