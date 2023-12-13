#include "Animal.hpp"

// ---------------------------------------------------------------- Constructor
Animal::Animal() : _type("No Type Defined!")
{
	if (DEBUG)
		std::cout << LGREEN << "Animal Base Default Constructor Called" << RESET << std::endl;

}

// ----------------------------------------------------------- Copy Constructor
Animal::Animal(const Animal& rhs)
{
	if (DEBUG)
		std::cout << LGREEN << "Animal Base Copy Constructor Called" << RESET << std::endl;

	this->_type = rhs._type;
}

// ----------------------------------------------------------------- Destructor
Animal::~Animal()
{
	if (DEBUG)
		std::cout << LGREEN << "Animal Base Destructor Called" << RESET << std::endl;

}

// ------------------------------------------------------------------- Overload
Animal& Animal::operator=(const Animal& rhs)
{
	if (DEBUG)
		std::cout << LGREEN << "Animal Base Destructor Called" << RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return *this;
}

// std::ostream & operator<<(std::ostream & lhs, Animal const & rhs)
// {
// 	lhs << LGREEN << "Animal " << rhs.getType() << " is here." << RESET << std::endl;

// 	return (lhs);
// }

// -------------------------------------------------------------------- Methods
void Animal::makeSound() const
{
	std::cout << "No sound is being emited by this Animal!" << std::endl;
}

// -------------------------------------------------------------------- Getters
std::string Animal::getType() const { return this->_type; }
