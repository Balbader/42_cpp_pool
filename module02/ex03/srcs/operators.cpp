#include "Fixed.hpp"

// -------------------------------------------------- > , < , >= , <= , == , !=
bool Fixed::operator>(Fixed const& rhs) const { return this->_value > rhs._value; }

bool Fixed::operator<(Fixed const& rhs) const { return this->_value < rhs._value; }

bool Fixed::operator>=(Fixed const& rhs) const { return this->_value >= rhs._value; }

bool Fixed::operator<=(Fixed const& rhs) const { return this->_value >= rhs._value; }

bool Fixed::operator==(Fixed const& rhs) const { return this->_value >= rhs._value; }

bool Fixed::operator!=(Fixed const& rhs) const { return this->_value != rhs._value; }


// -------------------------------------------------------------- + , - , * , /
Fixed& Fixed::operator+(Fixed const& rhs)
{
	if (this != &rhs)
		this->_value += rhs._value;

	return *this;
}

Fixed& Fixed::operator-(Fixed const& rhs)
{
	if (this != &rhs)
		this->_value -= rhs._value;

	return *this;
}

Fixed& Fixed::operator*(Fixed const& rhs)
{
	if (this != &rhs)
		this->_value *= rhs._value;

	return *this;
}

Fixed& Fixed::operator/(Fixed const& rhs)
{
	if (this != &rhs)
		this->_value /= rhs._value;

	return *this;
}


// -------------------------------------------------------------------- ++ / --
Fixed& Fixed::operator++()
{
	++this->_value;

	return *this;
}

Fixed& Fixed::operator--()
{
	--this->_value;

	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed cpy(*this);

	++this->_value;

	return cpy;
}

Fixed Fixed::operator--(int)
{
	Fixed cpy(*this);

	--this->_value;

	return cpy;
}
