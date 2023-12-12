#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap a("RIRI");
	ClapTrap b(a);

	ScavTrap c("FIFI");

    FragTrap d("LOULOU");

	std::cout << std::endl;
	std::cout << LRED << a << RESET << std::endl;
	std::cout << LGREEN << b << RESET << std::endl;
	std::cout << LBLUE << c << RESET << std::endl;
	std::cout << LYELLOW << d << RESET << std::endl;

	a.attack(c.getName());
	// std::cout << BLUE << a << RESET;

	d.attack(b.getName());
	// std::cout << LGREEN << d << RESET << std::endl;

	a.takeDamage(4);
	// std::cout << BLUE << a << RESET << std::endl;

	a.beRepaired(2);
	// std::cout << BLUE << a << RESET << std::endl;

    d.highFivesGuys();

	return 0;
}
