#include "WrongCat.hpp"

// ---------------------------------------------------------------- Constructor
WrongCat::WrongCat() : WrongAnimal()
{
	if (DEBUG)
		std::cout << YELLOW << "WrongCat Derived Default Constructor Called" << RESET << std::endl;

	this->_type = "WrongCat";
}


// ----------------------------------------------------------- Copy Constructor
WrongCat::WrongCat(const WrongCat& rhs) : WrongAnimal()
{
	if (DEBUG)
		std::cout << YELLOW << "WrongCat Derived Copy Constructor Called" << RESET << std::endl;

	*this = rhs;
}


// ----------------------------------------------------------------- Destructor
WrongCat::~WrongCat()
{
	if (DEBUG)
		std::cout << YELLOW << "WrongCat Derived Destructor Called" << RESET << std::endl << std::endl;
}


// ------------------------------------------------------------------- Overload
WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	if (DEBUG)
		std::cout << YELLOW << "WrongCat Derived Destructor Called" << RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return *this;
}
