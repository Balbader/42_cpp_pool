#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Basil");
	ClapTrap b(a);

	std::cout << std::endl << a;
	std::cout << b << std::endl;

	a.attack("Bob");
    std::cout << std::endl;
	a.takeDamage(4);
    std::cout << std::endl;
	a.beRepaired(2);

    std::cout << std::endl;

	return 0;
}
