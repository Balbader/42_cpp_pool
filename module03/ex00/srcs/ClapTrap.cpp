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

// Operator Assignment
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

// Destructor
ClapTrap::~ClapTrap()
{
	if (DEBUG)
		std::cout << RED << "Destructor called" << RESET << std::endl;
}

// Methods
void ClapTrap::attack(const std::string &target)
{
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}

// Setters
void ClapTrap::setName(std::string name) { this->_name = name; }

// Getters
std::string ClapTrap::getName() const { return this->_name; }
int ClapTrap::getPoints() const { return this->_points; }
int ClapTrap::getEnergyPoints() const { return this->_energyPoints; }
int ClapTrap::getAttackDamage() const { return this->_attackDamage; }
