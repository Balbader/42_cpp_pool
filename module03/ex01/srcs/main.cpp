#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("RIRI");
	ClapTrap b(a);

	ScavTrap c("FIFI");
	ScavTrap d("LOULOU");

	std::cout << GREEN << a << RESET;
	std::cout << GREEN << b << RESET;
	std::cout << YELLOW << c << RESET;
	std::cout << YELLOW << d << RESET << std::endl;

	a.attack(c.getName());

	d.attack(b.getName());

	a.takeDamage(4);

    c.guardGate();

	a.beRepaired(2);

	return 0;
}
