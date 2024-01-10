#include "EasyFind.hpp"

int main(void)
{
    std::vector<int> l;
    std::vector<int>::iterator lol;

    for (int i = 0; i < 100; i++) {
        l.push_back(i);
    }

    //petit test sur vector de different type
    std::vector<char> b;
    std::vector<char>::iterator bol;

    for (int i = 0; i < 10; i++) {
        b.push_back('c');
    }
    
    try {
        bol = easyfind(b, 2);
        std::cout << "iterator: " << *bol << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Can't find what you're looking for in CHAR VECTOR OMG" << std::endl;
    }
	try {
        bol = easyfind(b, 'c');
        std::cout << "iterator: " << *bol << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Can't find what you're looking for in CHAR VECTOR OMG" << std::endl;
    }
    // fin petit test
    
    try {
        lol = easyfind(l, 3);
        std::cout << "iterator: " << *lol << std::endl;
    } catch (const std::exception& e) {
        
        // std::cerr << e.what() << '\n';
    }

    try {
        lol = easyfind(l, -3);
        std::cout << "iterator: " << *lol << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Can't find what you're looking for" << std::endl;
    }
    
    try {
        lol = easyfind(l, 35);
        std::cout << "iterator: " << *lol << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Can't find what you're looking for" << std::endl;
    }

    try {
        lol = easyfind(l, 100);
        std::cout << "iterator: " << *lol << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Can't find what you're looking for" << std::endl;
    }

    try {
        lol = easyfind(l, 99);
        std::cout << "iterator: " << *lol << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Can't find what you're looking for" << std::endl;
    }

    return (0);
}
