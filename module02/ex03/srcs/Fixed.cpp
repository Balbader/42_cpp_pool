#include "Fixed.hpp"

int const Fixed::_bits(8);

// ---------------------------------------------------------------- Constructor
Fixed::Fixed()
{
    if (DEBUG)
        std::cout << LGREEN << "Default constructor called" << RESET << std::endl;

	this->_value = 0;
}


Fixed::Fixed(const Fixed & original)
{
    if (DEBUG)
        std::cout << ORANGE << "Copy constructor called" << RESET << std::endl;

	this->_value = original._value;
}


Fixed::Fixed(int const original)
{
	if (DEBUG)
		std::cout << CYAN << "Int constructor called" << RESET << std::endl;

	this->_value = original * 256;
}


Fixed::Fixed(float const original)
{
	if (DEBUG)
		std::cout << CYAN << "Float constructor called" << RESET << std::endl;

	this->_value = roundf(original * (1 * 256));
}


// ----------------------------------------------------------------- Destructor
Fixed ::~Fixed()
{
    if (DEBUG)
        std::cout << RED << "Destructor called" << RESET << std::endl;
}


// ------------------------------------------------------------------- Overload
Fixed& Fixed::operator=(Fixed const & rhs)
{
	if (DEBUG)
		std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;

	if (this != &rhs)
		this->_value = rhs._value;

	return *this;
}

std::ostream &operator<<(std::ostream &lhs, Fixed const &rhs)
{
	lhs << rhs.toFloat();

	return lhs;
}


// ------------------------------------------------------------------ Functions
int Fixed::toInt(void) const { return this->_value / 256; }

float Fixed::toFloat(void) const { return (float)this->_value / 256; }

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
	{
		std::cout << "a: " << a << std::endl;
		return a;
	}
	std::cout << "b: " << b << std::endl;
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
	{
		std::cout << "a: " << a << std::endl;
		return a;
	}
	std::cout << "b: " << b << std::endl;
	return b;
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
	{
		std::cout << "a: " << a << std::endl;
		return a;
	}
	std::cout << "b: " << b << std::endl;
	return b;
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
	{
		std::cout << "a: " << a << std::endl;
		return a;
	}
	std::cout << "b: " << b << std::endl;
	return b;
}


// ------------------------------------------------------------ Setter & Getter
void Fixed::setRawBits(int const bit)
{
	if (DEBUG)
		std::cout << WHITE << "setRawBits() member function called" << RESET << std::endl;

	this->_value = bit;
}

int Fixed::getRawBits(void) const
{
	if (DEBUG)
		std::cout << BLUE << "getRawBits member function called" << RESET << std::endl;

	return this->_value;
}
