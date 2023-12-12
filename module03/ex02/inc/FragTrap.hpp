#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string);
	~FragTrap();

    void highFivesGuys(void);
};

std::ostream & operator<<(std::ostream & lhs, FragTrap const & rhs);

#endif // !FRAGTRAP_HPP
