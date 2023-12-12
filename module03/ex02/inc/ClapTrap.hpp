#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "colors.hpp"
#include <iostream>
#include <string>

// #define DEBUG 0
#define DEBUG 1

class ClapTrap {
public:
	ClapTrap(std::string);
	~ClapTrap();

	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);

	void attack(const std::string&);
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);

	void setName(std::string);
	void setHitPoints(unsigned int);
	void setEnergyPoints(unsigned int);
	void setAttackPoints(unsigned int);

	std::string getName() const;
	unsigned int getHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;

protected:
	ClapTrap();

	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
	
};

std::ostream & operator<<(std::ostream & lhs, ClapTrap const & rhs);

#endif // !CLAPTRAP_HPP
