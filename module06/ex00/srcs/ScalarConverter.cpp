#include "ScalarConverter.hpp"

// ----------------------------------------------------------------------------
// ---------------------------------------------------------------- Constructor
// ----------------------------------------------------------------------------
ScalarConverter::ScalarConverter() {
  if (DEBUG)
    std::cout << GREEN << "ScalarConverter Base Constructor called" << RESET
              << std::endl;
}

// ----------------------------------------------------------------------------
// ----------------------------------------------------------- Copy Constructor
// ----------------------------------------------------------------------------
ScalarConverter::ScalarConverter(const ScalarConverter& rhs) {
  if (DEBUG)
    std::cout << GREEN << "ScalarConverter Copy Constructor called" << RESET
              << std::endl;

	*this = rhs;
}

// ----------------------------------------------------------------------------
// ------------------------------------------------------------------- Overload
// ----------------------------------------------------------------------------
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs) {
  if (DEBUG)
    std::cout << GREEN << "ScalarConverter assignment operator called" << RESET
              << std::endl;

    (void)rhs;

    return (*this);
}

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------- Destructor
// ----------------------------------------------------------------------------
ScalarConverter::~ScalarConverter() {
  if (DEBUG)
    std::cout << GREEN << "ScalarConverter destructor called" << RESET
              << std::endl;
}

// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Methods
// ----------------------------------------------------------------------------
void	ScalarConverter::convertTo(std::string& str)
{
	// Defining an array of the 6 special cases to handle
	std::string special[6] = {
		"-inff", "+inff", "nanf",
		"-inf", "+inf", "nan"
	};

	// 4 variable types to handle
	std::string toChar = "";
	long long	toInt = 0;
	float		toFloat = 0;
	double		toDouble = 0;
	
	if (str.size() == 1 && std::isprint(str[0]) && !std::isdigit(str[0])) {
		toChar = str[0];
		std::cout << "char: " << toChar << std::endl;
		std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" <<std::endl;
		std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" <<std::endl;
		return ;
	}
	
	toInt = std::atoll(str.c_str());
    
	if (str[str.length() - 1] == 'f') {
		toFloat = std::atof(str.c_str());
		toDouble = static_cast<double>(toFloat);
	} else {
		toDouble = std::atof(str.c_str());
		toFloat = static_cast<float>(toDouble);
	}

	for (int i = 0; i < 6; i++) {
		if (str == special[i]) {
			toChar = "impossible";
			break ;
		}
	}
	
	if (toChar == "" && toInt < 256 && toInt >= 0) {
        if (std::isprint(toInt)) {
            toChar = "'";
            toChar += static_cast<char>(toInt);
            toChar += "'";            
        }
	} else if (toChar == "") {
		toChar = "Non displayable";
	}
	
    std::cout << "char: " << toChar << std::endl;

    if (toChar == "impossible" || (toInt < INT_MIN || toInt > INT_MAX))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << toInt << std::endl;
    
    if (toChar == "impossible" && toFloat == 0) {
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    } else {
        if (toChar != "impossible" && toFloat - static_cast<int>(toFloat) == 0) {
            std::cout << "float: " << toFloat << ".0f" << std::endl;
            std::cout << "double: " << toDouble << ".0" << std::endl;
        } else {
            std::cout << "float: " << toFloat << "f" << std::endl;
            std::cout << "double: " << toDouble << std::endl;
        }
    }
}
