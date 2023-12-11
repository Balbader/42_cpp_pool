#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string);
	~FragTrap();

	FragTrap(const FragTrap &);
	FragTrap &operator=(const FragTrap &);

private:
	
};

#endif // !FRAGTRAP_HPP
