#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap()
{
	if (DEBUG)
		std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _points(10), _energyPoints(10), _attackDamage(0)
{
	if (DEBUG)
		std::cout << LGREEN << "Name constructor called" << RESET << std::endl;
}


// Destructor
ClapTrap::~ClapTrap()
{
	if (DEBUG)
		std::cout << RED << "Destructor called" << RESET << std::endl;
}

// Getters
std::string ClapTrap::getName() { return this->_name; }
int ClapTrap::getPoints() { return this->_points; }
int ClapTrap::getEnergyPoints() { return this->_energyPoints; }
int ClapTrap::getAttackDamage() { return this->_attackDamage; }
