#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include "colors.hpp"

#include <iostream>
#include <cstdlib>
#include <map>
#include <fstream>
#include <string>
#include <iomanip>

#define DEBUG 1

class BitcoinExchange {
public:
	BitcoinExchange();
	~BitcoinExchange();

	BitcoinExchange(const BitcoinExchange& rhs);
	BitcoinExchange& operator=(const BitcoinExchange& rhs);

	int	checkFormatDate(std::string date);
	int	checkFormatInput(std::string line);
	int	checkFormatDatabase(std::string line);

	void readInputFile(std::string input);

	int	getAbort();


private:
	int abort;
	std::map<std::string, float> dataExchange;
};

#endif
