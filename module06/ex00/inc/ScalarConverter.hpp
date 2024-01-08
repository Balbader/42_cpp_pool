#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include "colors.hpp"

#include <iostream>
#include <climits>
#include <cstdlib>
#include <string>

#define DEBUG 1

class ScalarConverter {
public:
	ScalarConverter();
	~ScalarConverter();

	ScalarConverter(const ScalarConverter &);
	ScalarConverter &operator=(const ScalarConverter &);

	static void convertTo(std::string&);
};

#endif // !SCALARCONVERTER_HPP
