#include "Cat.hpp"

// ---------------------------------------------------------------- Constructor
Cat::Cat() : _type("Cat")
{
	if (DEBUG)
		std::cout << LYELLOW << "Cat Base Default Constructor Called" << RESET << std::endl;

}

// ---------------------------------------------------------------- Copy Constructor
Cat::Cat(const Cat& rhs)
{
	if (DEBUG)
		std::cout << LYELLOW << "Cat Base Copy Constructor Called" << RESET << std::endl;

}

// ---------------------------------------------------------------  Destructor
Cat::~Cat()
{
	if (DEBUG)
		std::cout << LYELLOW << "Cat Base Destructor Called" << RESET << std::endl;

}

// ---------------------------------------------------------------  Overload
Cat& Cat::operator=(const Cat& rhs)
{
	if (DEBUG)
		std::cout << LYELLOW << "Cat Base Destructor Called" << RESET << std::endl;

	return *this;
}

// ---------------------------------------------------------------  Overload
