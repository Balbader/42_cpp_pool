#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : _name()
{
    if (DEBUG)
        std::cout << MAGENTA << "DiamondTrap Derived name constructor called" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    if (DEBUG)
        std::cout << LRED << "DiamondTrap Derived destructor called" << RESET << std::endl;
}

// --------------------------------------------------------------- Overload
std::ostream & operator<<(std::ostream & lhs, DiamondTrap const & rhs)
{
	lhs << "DiamondTrap " << rhs.getName() << " has " << rhs.getAttackDamage() << " attack points, " << rhs.getEnergyPoints() << " energy points and " << rhs.getHitPoints() << " hit points." << std::endl;
	return (lhs);
}
