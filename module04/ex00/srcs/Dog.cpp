#include "Dog.hpp"

// ---------------------------------------------------------------- Constructor
Dog::Dog() : _type("Dog")
{
	if (DEBUG)
		std::cout << LYELLOW << "Dog Derived Default Constructor Called" << RESET << std::endl;

}

// ----------------------------------------------------------- Copy Constructor
Dog::Dog(const Dog& rhs)
{
	if (DEBUG)
		std::cout << LYELLOW << "Dog Derived Copy Constructor Called" << RESET << std::endl;

	this->_type = rhs._type;
}

// ----------------------------------------------------------------- Destructor
Dog::~Dog()
{
	if (DEBUG)
		std::cout << LYELLOW << "Dog Derived Destructor Called" << RESET << std::endl;

}

// ------------------------------------------------------------------- Overload
Dog& Dog::operator=(const Dog& rhs)
{
	if (DEBUG)
		std::cout << LYELLOW << "Dog Derived Destructor Called" << RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return *this;
}

// std::ostream & operator<<(std::ostream & lhs, Dog const & rhs)
// {
// 	lhs << LYELLOW << "This " << rhs.getType() << rhs.makeSound() << RESET << std::endl;

// 	return (lhs);
// }

// -------------------------------------------------------------------- Methods
void makeSoud() override
{
	std::cout << "Meeeeooooowwww" << std::endl;
}
