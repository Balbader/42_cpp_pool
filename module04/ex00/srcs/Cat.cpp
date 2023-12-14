#include "Cat.hpp"

// ---------------------------------------------------------------- Constructor
Cat::Cat() : Animal()
{
	if (DEBUG)
		std::cout << LYELLOW << "Cat Derived Default Constructor Called" << RESET << std::endl;

	this->_type = "Cat";
}

// ----------------------------------------------------------- Copy Constructor
Cat::Cat(const Cat& rhs) : Animal()
{
	if (DEBUG)
		std::cout << LYELLOW << "Cat Derived Copy Constructor Called" << RESET << std::endl;

	*this = rhs;
}


// ----------------------------------------------------------------- Destructor
Cat::~Cat()
{
	if (DEBUG)
		std::cout << LYELLOW << "Cat Derived Destructor Called" << RESET << std::endl << std::endl;

}


// ------------------------------------------------------------------- Overload
Cat& Cat::operator=(const Cat& rhs)
{
	if (DEBUG)
		std::cout << LYELLOW << "Cat Derived Destructor Called" << RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return *this;
}


// -------------------------------------------------------------------- Methods
void Cat::makeSoud() const
{
	std::cout << "Meeeeooooowwww" << std::endl;
}
