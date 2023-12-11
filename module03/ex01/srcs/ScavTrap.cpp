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

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << std::endl << MAGENTA << this->_name << " is already dead." << RESET << std::endl;
		return;
	}

	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << std::endl << "ScavTrap " << this->_name << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	}
	else
		std::cout << std::endl << "ScavTrap " << this->_name << " is out of energy." << std::endl;

}

// ----------------------------------------------------------------- Destructor
ScavTrap::~ScavTrap()
{
	if (DEBUG)
		std::cout << std::endl << RED << "Derived Destructor called" << RESET << std::endl << std::endl;
}
