#include "Animal.hpp"

// ---------------------------------------------------------------- Constructor
Animal::Animal() : _type("Animal")
{
	if (DEBUG)
		std::cout << std::endl << GRAY << "Animal Base Default Constructor Called" << RESET << std::endl;
}


// ----------------------------------------------------------- Copy Constructor
Animal::Animal(const Animal& rhs)
{
	if (DEBUG)
		std::cout << GRAY << "Animal Base Copy Constructor Called" << RESET << std::endl;

	*this = rhs;
}


// ----------------------------------------------------------------- Destructor
Animal::~Animal()
{
	if (DEBUG)
		std::cout << GRAY << "Animal Base Destructor Called" << RESET << std::endl;
}


// ------------------------------------------------------------------- Overload
Animal& Animal::operator=(const Animal& rhs)
{
	if (DEBUG)
		std::cout << GRAY << "Animal Base Destructor Called" << RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return *this;
}


// -------------------------------------------------------------------- Methods
void Animal::makeSound() const
{
	std::cout << GRAY << "Animal sound undefined!" << RESET << std::endl;
}


// -------------------------------------------------------------------- Getters
std::string Animal::getType() const { return this->_type; }
