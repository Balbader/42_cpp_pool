#ifndef FIXED_HPP
#define FIXED_HPP

#include "colors.hpp"
#include <iostream>
#include <cmath>
#include <string>

#define DEBUG 1

class Fixed
{

	public:

		Fixed();
		~Fixed();

		Fixed(int const);
		Fixed(float const);

		Fixed(const Fixed &);
		Fixed &operator=(const Fixed &);

		int toInt(void) const;
		float toFloat(void) const;

		void setRawBits(int const);
		int getRawBits(void) const;

	private:

		int _value;
		static int const _bits;

};

std::ostream & operator<<(std::ostream & lhs, Fixed const & rhs);

#endif // !FIXED_HPP
