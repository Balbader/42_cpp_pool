#include "Point.hpp"

int main()
{
    //Test the Point class and bsp function

    // Point a(0, 0);
    // Point b(4, 0);
    // Point c(2, 3);

    Point a(0, 0);
    Point b(5.12, 4.16);
    Point c(1.18, -6.49);

	// Point a(0, 3.02);
	// Point b(5, 3.02);
	// Point c(2.5, 0);

    Point insidePoint(2, 1);
    Point outsidePoint(1, 1);

    std::cout << "Is insidePoint inside the triangle? " << std::boolalpha << bsp(a, b, c, insidePoint) << std::endl;
    std::cout << "Is outsidePoint inside the triangle? " << std::boolalpha << bsp(a, b, c, outsidePoint) << std::endl;

    return 0;
}
