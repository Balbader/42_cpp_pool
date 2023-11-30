#include "Fixed.hpp"

int const Fixed::_bits(8);

// Constructor
Fixed::Fixed()
{
    if (DEBUG)
        std::cout << LGREEN << "Default constructor called" << RESET << std::endl;
	this->_value = 0;
}


// Destructor
Fixed ::~Fixed()
{
    if (DEBUG)
        std::cout << RED << "Destructor called" << RESET << std::endl;
}


// Copy Constructor
Fixed::Fixed(const Fixed & original)
{
    if (DEBUG)
        std::cout << CYAN << "Copy constructor called" << RESET << std::endl;
	this->_value = original.getRawBits();
}


// Overload
Fixed & Fixed::operator=(Fixed const & rhs)
{
	if (DEBUG)
		std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;

	if (this != &rhs)
		this->_value = rhs.getRawBits();

	return *this;
}


// Setter & Getter
void Fixed::setRawBits(int const bit)
{
	if (DEBUG)
		std::cout << LBLUE << "setRawBits() member function called" << RESET << std::endl;

	this->_value = bit;
}

int Fixed::getRawBits(void) const
{
	if (DEBUG)
		std::cout << BLUE << "getRawBits member function called" << RESET << std::endl;

	return this->_value;
}
