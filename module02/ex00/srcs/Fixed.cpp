#include "Fixed.hpp"

int const Fixed::_bits(8);

// Constructor - Copy Constructor
Fixed::Fixed()
{
    if (DEBUG)
        std::cout << LGREEN << "Fixed Constructor Called" << RESET << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed & original)
{
    if (DEBUG)
        std::cout << CYAN << "Fixed - Copy  Constructor Called" << RESET << std::endl;
	this->_value = original.getRawBits();
}


// Destructor
Fixed ::~Fixed()
{
    if (DEBUG)
        std::cout << RED << "Fixed Constructor Destroyed" << RESET << std::endl;
}


// Overload
Fixed & Fixed::operator=(Fixed const & rhs)
{
	if (DEBUG)
		std::cout << YELLOW << "Fixed Copy Assignment Operator Called" << RESET << std::endl;

	if (this != &rhs)
	{
		this->_value = rhs.getRawBits();
	}

	return *this;
}


// Setter & Getter
void Fixed::setRawBits(int const bit)
{
	if (DEBUG)
		std::cout << LBLUE << "Fixed - setRawBits() Method Called" << RESET << std::endl;

	this->_value = bit;
}

int Fixed::getRawBits(void) const
{
	if (DEBUG)
		std::cout << BLUE << "Fixed - getRawBits() Method Called" << RESET << std::endl;

	return this->_value;
}
