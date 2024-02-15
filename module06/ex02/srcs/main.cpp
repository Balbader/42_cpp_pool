#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base* rand = generate();
    Base* ran = generate();
    Base* ra = generate();

    identify(rand);
    identify(ran);
    identify(ra);

	delete rand;
	delete ran;
	delete ra;
}
