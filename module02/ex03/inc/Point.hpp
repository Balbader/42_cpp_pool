#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
public:
    // Default constructor
    Point();

    // Destructor (not explicitly needed in this case)
	~Point();

    // Constructor with parameters
    Point(double, double);

    // Copy constructor
    Point(const Point&);

    // Copy assignment operator
    Point& operator=(const Point& rhs);

    // Getter functions
    double getX() const;
    double getY() const;

private:
    const double _x;
    const double _y;

	Fixed const x;
	Fixed const y;

};

bool bsp(const Point& a, const Point& b, const Point& c, const Point& point);

#endif // !POINT_HPP
