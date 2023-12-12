#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	~ScavTrap();

	ScavTrap(std::string);

	ScavTrap(const ScavTrap&);
	ScavTrap& operator=(const ScavTrap&);

	void attack(const std::string&);
	void guardGate(void);
};

std::ostream & operator<<(std::ostream & lhs, ScavTrap const & rhs);

#endif // !SCAVTRAP_HPP
