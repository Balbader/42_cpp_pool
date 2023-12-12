#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap a("RIRI");

	ClapTrap b(a);

	ScavTrap c("FIFI");
	ScavTrap d("LOULOU");

    FragTrap e("Mimi");

	std::cout << std::endl;

	std::cout << LRED << a << RESET << std::endl;
	std::cout << LGREEN << b << RESET << std::endl;
	std::cout << LBLUE << c << RESET << std::endl;
	std::cout << LYELLOW << d << RESET << std::endl;
	std::cout << MAGENTA << e << RESET << std::endl;

	std::cout << std::endl;

	a.attack(c.getName());
	std::cout << BLUE << a << RESET;

	d.attack(b.getName());
	std::cout << LGREEN << d << RESET << std::endl;

	a.takeDamage(4);
	std::cout << BLUE << a << RESET << std::endl;

	a.beRepaired(2);
	std::cout << BLUE << a << RESET << std::endl;

    e.highFivesGuys();

	return 0;
}
