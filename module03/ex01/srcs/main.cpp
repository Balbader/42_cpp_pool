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

	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << "d.getName() : " << d.getName() << std::endl;

	std::cout << std::endl;

	a.attack("Bob");
	std::cout << a << std::endl;

	a.takeDamage(4);
	std::cout << a << std::endl;

	a.beRepaired(2);
	std::cout << a << std::endl;

	return 0;
}
