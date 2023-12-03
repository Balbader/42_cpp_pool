#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "colors.hpp"

#include <iostream>
#include <string>

// #define DEBUG 0
#define DEBUG 1

class ClapTrap {

public:
	ClapTrap();
	~ClapTrap();

	ClapTrap(std::string);

	ClapTrap(const ClapTrap &);
	ClapTrap &operator=(const ClapTrap &);

	void attack(const std::string &);
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);

	void setName(std::string);

	std::string getName() const;
	int getPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;

private:
	std::string _name;
	int _points;
	int _energyPoints;
	int _attackDamage;
	
};

std::ostream& operator<<(std::ostream & lhs, ClapTrap const & rhs);

#endif // !CLAPTRAP_HPP
