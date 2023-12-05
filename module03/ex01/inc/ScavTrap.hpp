#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap();
	~ScavTrap();

	ScavTrap(const ScavTrap &);
	ScavTrap &operator=(const ScavTrap &);

	void guardGate(void);

private:
	
};
#endif // !SCAVTRAP_HPP
