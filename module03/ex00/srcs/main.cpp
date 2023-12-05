#include "ClapTrap.hpp"

int main(void)
{
	std::cout << std::endl;

	// ClapTrap OldClap;
	ClapTrap OldClap("Harold");

	std::cout << "Name: " << OldClap.getName() << std::endl;
	std::cout << "Hit Points: " << OldClap.getHitPoints() << std::endl;
	std::cout << "Energy Points: " <<  OldClap.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	OldClap.setName("Mimi");
	std::cout << "setName(\"Mimi\"): " << OldClap.getName() << std::endl;

	std::cout << std::endl;

	ClapTrap NewClap("Basil");

	std::cout << "Name: " << NewClap.getName() << std::endl;
	std::cout << "Hit Points: " << NewClap.getHitPoints() << std::endl;
	std::cout << "Energy Points: " <<  NewClap.getEnergyPoints() << std::endl;

	std::cout << std::endl;

	return 0;
}
