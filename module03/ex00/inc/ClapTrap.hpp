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

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName();
	int getPoints();
	int getEnergyPoints();
	int getAttackDamage();

private:
	std::string _name;
	int _points;
	int _energyPoints;
	int _attackDamage;
	
};

#endif // !CLAPTRAP_HPP
