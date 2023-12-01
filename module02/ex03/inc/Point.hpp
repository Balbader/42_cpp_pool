#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>

class Point {
public:
    // Default constructor
    Point();

    // Constructor with parameters
    Point(double x, double y);

    // Copy constructor
    Point(const Point& other);

    // Copy assignment operator
    Point& operator=(const Point& other);

    // Destructor (not explicitly needed in this case)
	~Point();

    // Getter functions
    double getX() const;
    double getY() const;

private:
    const double _x;
    const double _y;

};

#endif // !POINT_HPP
