#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
    DiamondTrap();
    ~DiamondTrap();

    // DiamondTrap(const DiamondTrap &);
    // DiamondTrap &operator=(const DiamondTrap &);

private:
    std::string _name;
};

std::ostream & operator<<(std::ostream & lhs, DiamondTrap const & rhs);

#endif // !DIAMONDTRAP_HPP
