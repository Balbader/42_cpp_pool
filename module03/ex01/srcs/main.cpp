#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Basil");

	ClapTrap b(a);

	ScavTrap c("Mimi");
	ScavTrap d("Faten");

	std::cout << std::endl;

	std::cout << LRED << a << RESET << std::endl;
	std::cout << LGREEN << b << RESET << std::endl;
	std::cout << LBLUE << c << RESET << std::endl;
	std::cout << LYELLOW << d << RESET << std::endl;

	std::cout << std::endl;

	a.attack("Bob");
	std::cout << BLUE << a << RESET;

	d.attack(b.getName());
	std::cout << LGREEN << d << RESET << std::endl;

	a.takeDamage(4);
	// std::cout << LRED << a << RESET << std::endl;
	std::cout << BLUE << a << RESET;

	a.beRepaired(2);
	// std::cout << LRED << a << RESET << std::endl;
	std::cout << BLUE << a << RESET;

	return 0;
}
