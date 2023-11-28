#include <Fixed.hpp>

int main(void)
{
    Fixed FixedPointNumber;
    Fixed Integer(42);
    Fixed NewFloat(42.42f);
    Fixed Name("Basil");

    FixedPointNumber = Integer;
    return 0;
}
