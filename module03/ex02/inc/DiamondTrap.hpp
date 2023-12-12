#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, FragTrap
{
public:
    DiamondTrap();
    ~DiamondTrap();

    DiamondTrap(const DiamondTrap &);
    DiamondTrap &operator=(const DiamondTrap &);

private:
    std::string _name;
    
};

#endif // !DIAMONDTRAP_HPP
