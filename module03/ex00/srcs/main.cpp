#include "ClapTrap.hpp"

int main(void)
{
	std::cout << std::endl;

	ClapTrap OldClap;

	std::cout << "Name: " << OldClap.getName() << std::endl;
	std::cout << "Points: " << OldClap.getPoints() << std::endl;
	std::cout << "Energy Points: " <<  OldClap.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	OldClap.setName("Mimi");
	std::cout << "Name: " << OldClap.getName() << std::endl;
	std::cout << "Points: " << OldClap.getPoints() << std::endl;
	std::cout << "Energy Points: " <<  OldClap.getEnergyPoints() << std::endl;

	std::cout << std::endl;

	ClapTrap NewClap("Basil");

	std::cout << "Name: " << NewClap.getName() << std::endl;
	std::cout << "Points: " << NewClap.getPoints() << std::endl;
	std::cout << "Energy Points: " <<  NewClap.getEnergyPoints() << std::endl;

	std::cout << std::endl;

	return 0;
}
