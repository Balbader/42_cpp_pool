#include "Cat.hpp"
#include <sstream>
#include <string>

// ---------------------------------------------------------------- Constructor
Cat::Cat() : AAnimal()
{
	if (DEBUG)
		std::cout << LBLUE << "Cat Derived Default Constructor Called" << RESET << std::endl;

	this->_type = "Cat";
    this->_brain = new Brain();
}


// ----------------------------------------------------------------- Destructor
Cat::~Cat()
{
    delete _brain;

	if (DEBUG)
		std::cout << LBLUE << "Cat Derived Destructor Called" << RESET << std::endl;
}


// ----------------------------------------------------------- Copy Constructor
Cat::Cat(const Cat& rhs) : AAnimal()
{
	if (DEBUG)
		std::cout << LBLUE << "Cat Derived Copy Constructor Called" << RESET << std::endl;

    _brain = new Brain();
	*this = rhs;
}


// ------------------------------------------------------------------- Overload
Cat& Cat::operator=(const Cat& rhs)
{
	if (DEBUG)
		std::cout << LBLUE << "Cat Derived Destructor Called" << RESET << std::endl;

	if (this != &rhs)
	{
		this->_type = rhs._type;

		delete this->_brain;

		this->_brain = new Brain;

		for (int i = 0; i < 100; i++)
			this->_brain->getIdea(i) = rhs._brain->getIdea(i);
	}

	return *this;
}


// -------------------------------------------------------------------- Methods
void Cat::makeSound() const 
{
	std::cout << std::endl << "Meeeeooooowwww" << std::endl;
}

Brain* Cat::getBrain() { return _brain; }
