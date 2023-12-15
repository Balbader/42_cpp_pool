#include "AAnimal.hpp"

// ---------------------------------------------------------------- Constructor
AAnimal::AAnimal() : _type("AAnimal")
{
	if (DEBUG)
		std::cout << std::endl << GREEN << "AAnimal Base Default Constructor Called" << RESET << std::endl;
}


// ----------------------------------------------------------------- Destructor
AAnimal::~AAnimal()
{
	if (DEBUG)
		std::cout << GREEN << "AAnimal Base Destructor Called" << RESET << std::endl;
}


// ----------------------------------------------------------- Copy Constructor
AAnimal::AAnimal(const AAnimal& rhs)
{
	if (DEBUG)
		std::cout << GREEN << "AAnimal Base Copy Constructor Called" << RESET << std::endl;

	*this = rhs;
}



// ------------------------------------------------------------------- Overload
AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
	if (DEBUG)
		std::cout << GREEN << "AAnimal Base Destructor Called" << RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return *this;
}


// -------------------------------------------------------------------- Methods
void AAnimal::makeSound() const
{
	std::cout << GREEN << "AAnimal sound undefined!" << RESET << std::endl;
}


// -------------------------------------------------------------------- Getters
std::string AAnimal::getType() const { return this->_type; }
