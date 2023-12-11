#include "ClapTrap.hpp"

// --------------------------------------------------------------- Constructors
ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	if (DEBUG)
		std::cout << GREEN << "ClapTrap Base constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	if (DEBUG)
		std::cout << LGREEN << "ClapTrap Base Name constructor called" << RESET << std::endl;

	std::cout << "ClapTrap Name : "	<< GREEN << getName() << RESET << std::endl;
	std::cout << "ClapTrap Hit Points : " << GREEN << getHitPoints() << RESET << std::endl;
	std::cout << "ClapTrap Energy Points : " << GREEN << getEnergyPoints() << RESET << std::endl;
	std::cout << "ClapTrap Attack Points : "<< GREEN << getAttackDamage() << RESET << std::endl;
	std::cout << std::endl;
}


// ----------------------------------------------------------- Copy Constructor
ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	if (DEBUG)
		std::cout << ORANGE << "ClapTrap Base Copy constructor called" << RESET << std::endl;

	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	std::cout << "ClapTrap Name : "	<< GREEN << getName() << RESET << std::endl;
	std::cout << "ClapTrap Hit Points : " << GREEN << getHitPoints() << RESET << std::endl;
	std::cout << "ClapTrap Energy Points : " << GREEN << getEnergyPoints() << RESET << std::endl;
	std::cout << "ClapTrap Attack Points : "<< GREEN << getAttackDamage() << RESET << std::endl;
	std::cout << std::endl;
}


// ----------------------------------------------------------------- Destructor
ClapTrap::~ClapTrap()
{
	if (DEBUG)
		std::cout << RED << "Base Destructor called" << RESET << std::endl;
}


// ------------------------------------------------------------------- Overload
ClapTrap & ClapTrap::operator=(const ClapTrap &rhs)
{
	if (DEBUG)
		std::cout << YELLOW << "Base Assignment operator called" << RESET << std::endl;

	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}

	return *this;
}

std::ostream & operator<<(std::ostream & lhs, ClapTrap const & rhs)
{
	lhs << "ClapTrap " << rhs.getName() << " has " << rhs.getAttackDamage() << " attack damage, " << rhs.getEnergyPoints() << " energy points and " << rhs.getHitPoints() << " hit points." << std::endl;
	return (lhs);
}


// -------------------------------------------------------------------- Methods
void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
		std::cout << std::endl << "ClapTrap " << this->_name << " has no points at all." << std::endl;
	else
	{
		std::cout << std::endl << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;

		this->_energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
		std::cout << std::endl << "ClapTrap " << this->_name << " has no points at all." << std::endl;
	else
	{
		std::cout << std::endl << "ClapTrap " << this->_name << " has been attacked !" << std::endl << this->_name << " lost a total of "<< amount << " points !" << std::endl;

		if (this->_hitPoints < amount)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " has no points at all." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " is under repair." << std::endl << this->_name << " will receive a total of "<< amount << " points." << std::endl;

		if (this->_hitPoints < amount)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;

		this->_energyPoints -= 1;
	}

}


// ---------------------------------------------------------- Setters & Getters
void ClapTrap::setName(std::string name) { this->_name = name; }
void ClapTrap::setHitPoints(unsigned int points) { this->_hitPoints = points; }
void ClapTrap::setEnergyPoints(unsigned int energyPoints) { this->_energyPoints = energyPoints; }
void ClapTrap::setAttackPoints(unsigned int damagePoints) { this->_attackDamage = damagePoints; }

std::string ClapTrap::getName() const { return this->_name; }
unsigned int ClapTrap::getHitPoints() const { return this->_hitPoints; }
unsigned int ClapTrap::getEnergyPoints() const { return this->_energyPoints; }
unsigned int ClapTrap::getAttackDamage() const { return this->_attackDamage; }
