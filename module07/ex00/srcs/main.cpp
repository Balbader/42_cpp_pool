#include "Functions.hpp"

int main( void ) {

    int a = 2;
    int b = 3;

	std::cout << YELLOW << "\nWhith int's :" << RESET << std::endl;

    std::cout << "int a before swap = " << YELLOW << a << RESET
			  << "\nint b before swap = " << YELLOW << b << RESET
			  << "\n" << std::endl;

    swap( a, b );

    std::cout << "int a after swap = " << YELLOW << a << RESET
			  << "\nint b after swap = " << YELLOW << b << RESET
			  << "\n" << std::endl;

    std::cout << "min( a, b ) = " << YELLOW << min( a, b ) << RESET << std::endl;
    std::cout << "max( a, b ) = " << YELLOW << max( a, b ) << RESET << std::endl;

	// ========================================================================

    std::string c = "String 1";
    std::string d = "String 2";

	std::cout << LGREEN << "\n\nWhith strings :" << RESET << std::endl;

    std::cout << "string a before swap = " << LGREEN << c << RESET
			  << "\nstring b before swap = " << LGREEN << d << RESET
			  << "\n" << std::endl;

    swap(c, d);

    std::cout << "string a after swap = " << LGREEN << c << RESET
			  << "\nstring b after swap = " << LGREEN << d << RESET
			  << "\n" << std::endl;

    std::cout << "min( c, d ) = " << LBLUE << min( c, d ) << RESET << std::endl;
    std::cout << "max( c, d ) = " << LBLUE << max( c, d ) << RESET << std::endl;
    return 0;
}

// int main( void ) {

//     int a = 2;
//     int b = 3;

//     ::swap( a, b );
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//     std::string c = "chaine1";
//     std::string d = "chaine2";

//     ::swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//     std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

//     return 0;
// }
