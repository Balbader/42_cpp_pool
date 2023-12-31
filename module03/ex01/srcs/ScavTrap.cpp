#include "ScavTrap.hpp"

// --------------------------------------------------------------- Constructors
ScavTrap::ScavTrap()
{
	if (DEBUG)
		std::cout << YELLOW << "ScavTrap Derived constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	if (DEBUG)
		std::cout << YELLOW << "ScavTrap Derived Name constructor called" << RESET << std::endl;

	this->_name = name;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackPoints(20);

	std::cout << "ScavTrap Name : "	<< GREEN << getName() << RESET << std::endl;
	std::cout << "ScavTrap Hit Points : " << GREEN << getHitPoints() << RESET << std::endl;
	std::cout << "ScavTrap Energy Points : " << GREEN << getEnergyPoints() << RESET << std::endl;
	std::cout << "ScavTrap Attack Points : "<< GREEN << getAttackDamage() << RESET << std::endl;
	std::cout << std::endl;
}


// ----------------------------------------------------------------- Destructor
ScavTrap::~ScavTrap()
{
	if (DEBUG)
		std::cout << std::endl << YELLOW << "Derived Destructor called" << RESET << std::endl;
}


// --------------------------------------------------------------- Methods
void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << YELLOW << this->_name << " is already dead." << RESET << std::endl;
		return;
	}

	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is out of energy." << std::endl;

}

void ScavTrap::guardGate()
{
	if (this->_hitPoints <= 0)
	{
		std::cout << YELLOW << this->_name << " is already dead." << RESET << std::endl;
		return;
	}

	if (this->_energyPoints > 0)
		std::cout << "ScavTrap " << this->_name << " is in 'Gate Keeper Mode'" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is out of energy." << std::endl;
}

std::ostream & operator<<(std::ostream & lhs, ScavTrap const & rhs)
{
	lhs << "ScavTrap " << rhs.getName() << " has " << rhs.getAttackDamage() << " attack points, " << rhs.getEnergyPoints() << " energy points and " << rhs.getHitPoints() << " hit points." << std::endl;
	return (lhs);
}

