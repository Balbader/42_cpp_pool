#include "Fixed.hpp"

// Constructor - Copy Constructor - Destructors
Fixed::Fixed()
{
    if (DEBUG)
        std::cout << LGREEN << "Fixed Constructor Called" << RESET << std::endl;
}

Fixed::Fixed(std::string name)
{
    if (DEBUG)
        std::cout << ORANGE << "Fixed - Char Constructor Called" << RESET << std::endl;

    this->_name = name;
    std::cout << ORANGE << this->_name << RESET << std::endl;
}

Fixed::Fixed(int nb)
{

    if (DEBUG)
        std::cout << LBLUE << "Fixed - Int Constructor Called" << RESET << std::endl;

    this->_nb = nb;
    std::cout << LBLUE << this->_nb << RESET << std::endl;
}

Fixed::Fixed(float fnb)
{
    if (DEBUG)
        std::cout << YELLOW << "Fixed - Float Constructor Called" << RESET << std::endl;

    this->_floatNb = fnb;
    std::cout << YELLOW << this->_floatNb << RESET << std::endl;
}

Fixed::Fixed(const Fixed& original)
{
	*this = original;
}

Fixed &Fixed::orperator(const Fixed &original)
{
    if (DEBUG)
        std::cout << CYAN << "Fixed - copy original Constructor Called" << RESET << std::endl;

    std::string nameCopy = original._name;
    int nbCopy = original._nb;
    float fNbCopy = original._floatNb;

    std::cout << nameCopy << std::endl;
    std::cout << nbCopy << std::endl;
    std::cout << fNbCopy << std::endl;
}

Fixed ::~Fixed()
{
    if (DEBUG)
        std::cout << RED << "Fixed Constructor Destroyed" << RESET << std::endl;
}
