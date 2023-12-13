#include "Cat.hpp"

// ---------------------------------------------------------------- Constructor
Cat::Cat() : _type("Cat")
{
	if (DEBUG)
		std::cout << LYELLOW << "Cat Derived Default Constructor Called" << RESET << std::endl;

}

// ----------------------------------------------------------- Copy Constructor
Cat::Cat(const Cat& rhs)
{
	if (DEBUG)
		std::cout << LYELLOW << "Cat Derived Copy Constructor Called" << RESET << std::endl;

	this->_type = rhs._type;
}

// ----------------------------------------------------------------- Destructor
Cat::~Cat()
{
	if (DEBUG)
		std::cout << LYELLOW << "Cat Derived Destructor Called" << RESET << std::endl;

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

std::ostream & operator<<(std::ostream & lhs, Cat const & rhs)
{
	lhs << LYELLOW << "This " << rhs.getType() << rhs.makeSound() << RESET << std::endl;

	return (lhs);
}

// -------------------------------------------------------------------- Methods
void makeSoud() override
{
	std::cout << "Meeeeooooowwww" << std::endl;
}
