#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Basil");

	ClapTrap b(a);

	ScavTrap c;
	ScavTrap d("Faten");

	c.setName("Mimi");

	std::cout << std::endl;

	std::cout << LRED << a << RESET << std::endl;
	std::cout << LGREEN << b<< RESET << std::endl;
	std::cout << LBLUE << c << RESET << std::endl;
	std::cout << LYELLOW << d << RESET << std::endl;

	std::cout << std::endl;

	a.attack("Bob");
	// std::cout << LRED << a << RESET << std::endl;
	std::cout << a;

	d.attack(b.getName());
	std::cout << LGREEN << d << RESET << std::endl;

	a.takeDamage(4);
	// std::cout << LRED << a << RESET << std::endl;
	std::cout << a;

	a.beRepaired(2);
	// std::cout << LRED << a << RESET << std::endl;
	std::cout << a;

	return 0;
}
