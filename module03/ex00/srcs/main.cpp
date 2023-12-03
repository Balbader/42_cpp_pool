#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap OldClap;
	ClapTrap NewClap("Basil");

	std::cout << "Name: " << OldClap.getName() << std::endl;
	std::cout << "Points: " << OldClap.getPoints() << std::endl;
	std::cout << "Energy Points: " <<  OldClap.getEnergyPoints() << std::endl;

	std::cout << std::endl;

	std::cout << "Name: " << NewClap.getName() << std::endl;
	std::cout << "Points: " << NewClap.getPoints() << std::endl;
	std::cout << "Energy Points: " <<  NewClap.getEnergyPoints() << std::endl;

	return 0;
}
