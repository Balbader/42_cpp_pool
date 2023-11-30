#ifndef FIXED_HPP
#define FIXED_HPP

#include "colors.hpp"
#include <iostream>

#define DEBUG 1

class Fixed
{

public:

	Fixed();
	~Fixed();

	Fixed(const Fixed & original);
	Fixed &operator=(const Fixed & rhs);

	void setRawBits(int const bit);
	int getRawBits(void) const;

private:

	int _value;
	static int const _bits;

};

#endif // !FIXED_HPP
