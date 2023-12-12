#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap a("RIRI");
	ClapTrap b(a);

	ScavTrap c("FIFI");

    FragTrap d("LOULOU");

    DiamondTrap e;

	std::cout << LGREEN << a << RESET;
	std::cout << YELLOW << b << RESET;
	std::cout << LBLUE << c << RESET;
	std::cout << LYELLOW << d << RESET;
	std::cout << MAGENTA << d << RESET << std::endl;

	a.attack(c.getName());

	d.attack(b.getName());

	a.takeDamage(4);

    c.guardGate();

	a.beRepaired(2);

    d.highFivesGuys();

	return 0;
}
