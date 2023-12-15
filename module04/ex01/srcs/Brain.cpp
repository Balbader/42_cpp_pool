#include "Brain.hpp"

// ---------------------------------------------------------------- Constructor
Brain::Brain() : Animal()
{
	if (DEBUG)
		std::cout << GREEN << "Brain Derived Default Constructor Called" << RESET << std::endl;

	this->_type = "Brain";
}


// ----------------------------------------------------------------- Destructor
Brain::~Brain()
{
	if (DEBUG)
		std::cout << GREEN << "Brain Derived Destructor Called" << RESET << std::endl << std::endl;
}


// ----------------------------------------------------------- Copy Constructor
Brain::Brain(const Brain& rhs) : Animal()
{
	if (DEBUG)
		std::cout << GREEN << "Brain Derived Copy Constructor Called" << RESET << std::endl;

	*this = rhs;
}


// ------------------------------------------------------------------- Overload
Brain& Brain::operator=(const Brain& rhs)
{
	if (DEBUG)
		std::cout << GREEN << "Brain Derived Destructor Called" << RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return *this;
}


// -------------------------------------------------------------------- Methods
void Brain::makeSound() const 
{
	std::cout << GREEN << "Meeeeooooowwww" << RESET << std::endl;
}
