#include "BitcoinExchange.hpp"

int main(int ac , char **av)
{
	if (ac != 2) {
		std::cerr << "Error: could not open file." << std::endl;
		return (0);
	}

	BitcoinExchange binance;

	if (binance.getAbort() == 1)
		return (0);

	binance.readInputFile(av[1]);

	return (1);
}
