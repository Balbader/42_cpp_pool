#ifndef FIXED_HPP
#define FIXED_HP

#include "Point.hpp"
#include "colors.hpp"
#include <iostream>
#include <cmath>
#include <string>

#define DEBUG 0
// #define DEBUG 1

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

		static Fixed & min(Fixed &, Fixed &);
		static Fixed & max(Fixed &, Fixed &);

		static const Fixed & min(Fixed const &, Fixed const &);
		static const Fixed & max(Fixed const &, Fixed const &);

		// Comparaison
		bool operator>(Fixed const &) const;
		bool operator<(Fixed const &) const;
		bool operator>=(Fixed const &) const;
		bool operator<=(Fixed const &) const;
		bool operator==(Fixed const &) const;
		bool operator!=(Fixed const &) const;

		// Arithmetic
		Fixed &operator+(const Fixed &);
		Fixed &operator-(const Fixed &);
		Fixed &operator*(const Fixed &);
		Fixed &operator/(const Fixed &);

		// Increment/Decrement
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);

	private:

		int _value;
		static int const _bits;

};

std::ostream & operator<<(std::ostream & lhs, Fixed const & rhs);

#endif // !FIXED_HPP
