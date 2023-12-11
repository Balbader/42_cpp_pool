#include "ScavTrap.hpp"

// --------------------------------------------------------------- Constructors
ScavTrap::ScavTrap()
{
	if (DEBUG)
		std::cout << std::endl << YELLOW << "Derived constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	if (DEBUG)
		std::cout << std::endl << YELLOW << "Derived Name constructor called" << RESET << std::endl;

	this->_name = name;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackPoints(20);
}

// ------------------------------------------------------------------- Overload
// std::ostream & operator<<(std::ostream & lhs, ClapTrap const & rhs)
// {
// 	lhs << "ClapTrap " << rhs.getName() << " has " << rhs.getAttackDamage() << " attack damage, " << rhs.getEnergyPoints() << " energy points and " << rhs.getHitPoints() << " hit points." << std::endl;
// 	return (lhs);
// }

// ----------------------------------------------------------------- Destructor
ScavTrap::~ScavTrap()
{
	if (DEBUG)
		std::cout << RED << "Derived Destructor called" << RESET << std::endl << std::endl;
}
