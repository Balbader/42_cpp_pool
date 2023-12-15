#include "Brain.hpp"
#include <sstream>
#include <string>

// ---------------------------------------------------------------- Constructor
Brain::Brain()
{
	if (DEBUG)
		std::cout << LRED << "Brain Derived Default Constructor Called" << RESET << std::endl;

    std::stringstream tmp;

    for (int i = 0; i < 100; ++i) {
        tmp << i;
        this->ideas[i] = tmp.str();
    }
    std::cout << std::endl << ideas[99] << std::endl;
}


// ----------------------------------------------------------------- Destructor
Brain::~Brain()
{
	if (DEBUG)
		std::cout << LRED << "Brain Derived Destructor Called" << RESET << std::endl;
}


// ----------------------------------------------------------- Copy Constructor
Brain::Brain(const Brain& rhs)
{
	if (DEBUG)
		std::cout << LRED << "Brain Derived Copy Constructor Called" << RESET << std::endl;

	*this = rhs;
}


// ------------------------------------------------------------------- Overload
Brain& Brain::operator=(const Brain& rhs)
{
	if (DEBUG)
		std::cout << LRED << "Brain Derived Destructor Called" << RESET << std::endl;

	if (this != &rhs)
	{
		for (int i = 0; i < 10; i++)
			this->ideas[i] = rhs.ideas[i];	
	}

	return *this;
}


// -------------------------------------------------------------------- Methods
std::string Brain::getIdea(int i) const { return ideas[i]; }
