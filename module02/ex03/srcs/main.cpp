#include "Fixed.hpp"

// Function to check if a point is inside a triangle
bool bsp(const Point& a, const Point& b, const Point& c, const Point& point) {
    // Assuming a, b, c form a counter-clockwise orientation
    double d1 = (point.getX() - a.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (point.getY() - a.getY());
    double d2 = (point.getX() - b.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (point.getY() - b.getY());
    double d3 = (point.getX() - c.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (point.getY() - c.getY());

    return (d1 > 0 && d2 > 0 && d3 > 0) || (d1 < 0 && d2 < 0 && d3 < 0);
}

int main()
{
    // Test the Point class and bsp function
    Point a(0, 0);
    Point b(4, 0);
    Point c(2, 3);
    Point insidePoint(2, 1);
    Point outsidePoint(1, 1);

    std::cout << "Is insidePoint inside the triangle? " << std::boolalpha << bsp(a, b, c, insidePoint) << std::endl;
    std::cout << "Is outsidePoint inside the triangle? " << std::boolalpha << bsp(a, b, c, outsidePoint) << std::endl;

    return 0;
}
