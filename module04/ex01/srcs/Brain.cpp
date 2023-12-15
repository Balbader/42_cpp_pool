#include "Brain.hpp"

// ---------------------------------------------------------------- Constructor
Brain::Brain()
{
	if (DEBUG)
		std::cout << GREEN << "Brain Derived Default Constructor Called" << RESET << std::endl;
}


// ----------------------------------------------------------------- Destructor
Brain::~Brain()
{
	if (DEBUG)
		std::cout << GREEN << "Brain Derived Destructor Called" << RESET << std::endl << std::endl;
}


// ----------------------------------------------------------- Copy Constructor
Brain::Brain(const Brain& rhs)
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
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];	
	}

	return *this;
}


// -------------------------------------------------------------------- Methods
std::string Brain::getIdea(int i) const { return ideas[i]; }
