#include "FragTrap.hpp"

// --------------------------------------------------------------- Constructors
FragTrap::FragTrap(std::string name)
{
	if (DEBUG)
		std::cout << YELLOW << "FragTrap Derived Name constructor called" << RESET << std::endl;

	this->_name = name;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackPoints(30);

	std::cout << "FragTrap Name : "	<< GREEN << getName() << RESET << std::endl;
	std::cout << "FragTrap Hit Points : " << GREEN << getHitPoints() << RESET << std::endl;
	std::cout << "FragTrap Energy Points : " << GREEN << getEnergyPoints() << RESET << std::endl;
	std::cout << "FragTrap Attack Points : "<< GREEN << getAttackDamage() << RESET << std::endl;
	std::cout << std::endl;
}

FragTrap::~FragTrap()
{
	if (DEBUG)
		std::cout << std::endl << RED << "FragTrap Derived Destructor called" << RESET << std::endl;
}


void FragTrap::highFivesGuys()
{
    std::cout << std::endl << GREEN << "FragTrap " << getName() << " wants to high 5 the ClapTrap and the ScavTrap crew !" << RESET << std::endl;
}


std::ostream & operator<<(std::ostream & lhs, FragTrap const & rhs)
{
	lhs << "FragTrap " << rhs.getName() << " has " << rhs.getAttackDamage() << " attack points, " << rhs.getEnergyPoints() << " energy points and " << rhs.getHitPoints() << " hit points." << std::endl;
	return (lhs);
}
