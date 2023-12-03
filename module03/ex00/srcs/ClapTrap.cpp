#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap() : _points(10), _energyPoints(10), _attackDamage(0)
{
	if (DEBUG)
		std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _points(10), _energyPoints(10), _attackDamage(0)
{
	if (DEBUG)
		std::cout << LGREEN << "Name constructor called" << RESET << std::endl;
}


// Copy Constructor
ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	if (DEBUG)
		std::cout << ORANGE << "Copy constructor called" << RESET << std::endl;

	this->_name = rhs._name;
	this->_points = rhs._points;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
}

// Destructor
ClapTrap::~ClapTrap()
{
	if (DEBUG)
		std::cout << RED << "Destructor called" << RESET << std::endl;
}

// Overlaud
ClapTrap & ClapTrap::operator=(const ClapTrap &rhs)
{
	if (DEBUG)
		std::cout << YELLOW << "Assignment operator called" << RESET << std::endl;

	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_points = rhs._points;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}

	return *this;
}

std::ostream & operator<<(std::ostream & lhs, ClapTrap const & rhs)
{
	lhs << "ClapTrap " << rhs.getName() << " has " << rhs.getAttackDamage() << " attack damage, " << rhs.getEnergyPoints() << " energy points and " << rhs.getPoints() << " hit points." << std::endl;;

	return (lhs);
}

// Methods
void ClapTrap::attack(const std::string &target)
{
	if (this->_points == 0 || this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " has no points at all." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
		this->_energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}

// Setters
void ClapTrap::setName(std::string name) { this->_name = name; }
void ClapTrap::setPoints(unsigned int points) { this->_points = points; }
void ClapTrap::setEnergyPoints(unsigned int energyPoints) { this->_energyPoints = energyPoints; }
void ClapTrap::induceDamage(unsigned int bleed) { this->_points -= bleed; }

// Getters
std::string ClapTrap::getName() const { return this->_name; }
unsigned int ClapTrap::getPoints() const { return this->_points; }
unsigned int ClapTrap::getEnergyPoints() const { return this->_energyPoints; }
unsigned int ClapTrap::getAttackDamage() const { return this->_attackDamage; }
