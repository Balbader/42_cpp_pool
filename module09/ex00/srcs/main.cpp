#include "BitcoinExchange.hpp"

int main(int ac , char **av){

    if (ac != 2) {
		std::cerr << "Error: Usage is ./btc <file>.\n";
		return (ERROR);
	}

	BitcoinExchange btc;

	try {
		btc.getDatabase();
		btc.getInput(av[1]);
		return (SUCCESS);
	} catch(const std::exception& e) {
		std::cerr << "Error: " << e.what() << '\n';
	}

	return (ERROR);
}
