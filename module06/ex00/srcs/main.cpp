#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Enter \"./ScalarConvert\" followed by prop \"toConvert\" " << std::endl;
		return (0);
	}

	std::string s(av[1]);

	ScalarConverter::convertTo(s);
}
