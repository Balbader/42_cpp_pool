#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Basil");
	ClapTrap b(a);

	std::cout << std::endl;
	std::cout << a;
	std::cout << b;
	std::cout << "\n";

	a.attack("Bob");
	std::cout << a;
	std::cout << "\n";

	a.takeDamage(4);
	std::cout << a;
	std::cout << "\n";

	a.beRepaired(2);
	std::cout << a;
	std::cout << "\n";

	return 0;
}
