#include "Fixed.hpp"

// Constructor - Copy Constructor - Destructors
Fixed ::Fixed() {
    if (DEBUG) {
        std::cout << LGREEN << "Fixed Constructor Called" << RESET << std::endl;
    }
}

Fixed ::Fixed(std::string name) {

    if (DEBUG) {
        std::cout << ORANGE << "Fixed - Char Constructor Called" << RESET << std::endl;
    }

    this->_name = name;
    std::cout << ORANGE << this->_name << RESET << std::endl;
}

Fixed ::Fixed(int nb) {
    if (DEBUG) {
        std::cout << LBLUE << "Fixed - Int Constructor Called" << RESET << std::endl;
    }

    this->_nb = nb;
    std::cout << LBLUE << this->_nb << RESET << std::endl;
}

Fixed ::Fixed(float fnb) {
    if (DEBUG) {
        std::cout << YELLOW << "Fixed - Float Constructor Called" << RESET << std::endl;
    }

    this->_floatNb = fnb;
    std::cout << YELLOW << this->_floatNb << RESET << std::endl;
}

Fixed ::~Fixed() {
    if (DEBUG) {
        std::cout << RED << "Fixed Constructor Destroyed" << RESET << std::endl;
    }
}
