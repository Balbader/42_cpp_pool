#include "Fixed.hpp"

// -------------------------------------------------------- Default constructor
Point::Point() : _x(0), _y(0) {
	if (DEBUG)
		std::cout << LGREEN << "Default constructor called" << RESET << std::endl;
}


// ---------------------------- Destructor (not explicitly needed in this case)
Point::~Point() {
	if (DEBUG)
		std::cout << RED << "Destructor called" << RESET << std::endl;
}


// ------------------------------------------------ Constructor with parameters
Point::Point(double x, double y) : _x(x), _y(y) {
	if (DEBUG)
		std::cout << LBLUE << "Constructor with parameters called" << RESET << std::endl;
}


// ----------------------------------------------------------- Copy constructor
Point::Point(const Point& other) : _x(other._x), _y(other._y) {
	if (DEBUG)
		std::cout << ORANGE << "Copy constructor called" << RESET << std::endl;

}


// --------------------------------------------------- Copy assignment operator
Point& Point::operator=(const Point& other) {

	if (DEBUG)
		std::cout << YELLOW << "Copy assignment constructor called" << RESET << std::endl;

	if (this != &other) {
		// Perform copy assignment
		// Note: Since x and y are const, we don't need to copy them explicitly
	}

	return *this;
}


// ----------------------------------------------------------- Getter functions
double Point::getX() const { return _x; }

double Point::getY() const { return _y; }
