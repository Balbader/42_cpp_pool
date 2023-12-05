
#include "ScavTrap.hpp"

// --------------------------------------------------------------- Constructors
ScavTrap::ScavTrap()
{
	if (DEBUG)
		std::cout << std::endl << GREEN << "Derived constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	if (DEBUG)
		std::cout << std::endl << GREEN << "Derived Name constructor called" << RESET << std::endl;
}

// ----------------------------------------------------------------- Destructor
ScavTrap::~ScavTrap()
{
	if (DEBUG)
		std::cout << RED << "Derived Destructor called" << RESET << std::endl << std::endl;
}
