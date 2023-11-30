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

	this->_value = original << _bits;
}


Fixed::Fixed(float const original)
{
	if (DEBUG)
		std::cout << CYAN << "Float constructor called" << RESET << std::endl;

	this->_value = roundf(original * (1 << _bits));
}


// ----------------------------------------------------------------- Destructor
Fixed ::~Fixed()
{
    if (DEBUG)
        std::cout << RED << "Destructor called" << RESET << std::endl;
}


// ------------------------------------------------------------------- Overload
Fixed & Fixed::operator=(Fixed const & rhs)
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
int Fixed::toInt(void) const
{
	return (this->_value >> _bits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << _bits));
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
