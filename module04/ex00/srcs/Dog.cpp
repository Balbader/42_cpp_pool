#include "Dog.hpp"

// ---------------------------------------------------------------- Constructor
Dog::Dog()
{
	if (DEBUG)
		std::cout << ORANGE << "Dog Derived Default Constructor Called" << RESET << std::endl;

	this->_type = "Dog";
}


// ----------------------------------------------------------- Copy Constructor
Dog::Dog(const Dog& rhs) : Animal()
{
	if (DEBUG)
		std::cout << ORANGE << "Dog Derived Copy Constructor Called" << RESET << std::endl;

	this->_type = rhs._type;
}


// ----------------------------------------------------------------- Destructor
Dog::~Dog()
{
	if (DEBUG)
		std::cout << ORANGE << "Dog Derived Destructor Called" << RESET << std::endl << std::endl;

}


// ------------------------------------------------------------------- Overload
Dog& Dog::operator=(const Dog& rhs)
{
	if (DEBUG)
		std::cout << ORANGE << "Dog Derived Destructor Called" << RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return *this;
}


// -------------------------------------------------------------------- Methods
void Dog::makeSoud() const
{
	std::cout << "Wouf Wouf" << std::endl;
}
