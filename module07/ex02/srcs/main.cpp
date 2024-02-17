#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 10;
        numbers[i] = value;
        mirror[i] = value;
    }

    //Test max value Array vs int[]
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     std::cout << "Numbers:"<< numbers[i] << std::endl;
    //     std::cout << "Mirror:"<< mirror[i] << std::endl;
    // }

    //Scope Deep Copy test
    std::cout << "\n------------------------------> Deep Copy tests" << std::endl;

    {

        std::cout << "\nOperator overload =" << std::endl;

        Array<int> toCopy(10);

        for (unsigned int i = 0; i < toCopy.size(); i++) {
            toCopy[i] = i;
        }

        Array<int> copy = toCopy;

        std::cout << "\nDisplay both arrays" << std::endl;
		
        for (unsigned int i = 0; i < toCopy.size(); i++) {
            std::cout << "toCopy[" << i << "]: " << toCopy[i] << std::endl;
            std::cout << "  copy[" << i << "]: " << copy[i] << std::endl;
            std::cout << "\n";
        }

        std::cout << "\nModify \"copy\", shouldn't modify \"toCopy\"" << std::endl;
        for (unsigned int i = 0; i < toCopy.size(); i++) {
            copy[i] = 10 - i;
        }

        std::cout << "\"copy\" has been modified, print both arrays\n" << std::endl;
        for (unsigned int i = 0; i < toCopy.size(); i++) {
            std::cout << "toCopy[" << i << "]: " << toCopy[i] << std::endl;
            std::cout << "  copy[" << i << "]: " << copy[i] << std::endl;
            std::cout << "\n";
        }

		std::cout << "\n";
        std::cout << "----------------> Copy through constructor test\n" << std::endl;

        Array<int> copy2(copy);

        for (unsigned int i = 0; i < copy.size(); i++) {
            std::cout << " copy[" << i << "]: " << copy[i] << std::endl;
            std::cout << "copy2[" << i << "]: " << copy2[i] << std::endl;
		    std::cout << "\n";
        }

        std::cout << "\nModify \"copy2\", shouldn't modify \"copy\"" << std::endl;

        for (unsigned int i = 0; i < toCopy.size(); i++) {
            copy2[i] = i;
        }

        std::cout << "\"copy2\" has been modified, print both arrays\n" << std::endl;

        for (unsigned int i = 0; i < copy.size(); i++) {
            std::cout << " copy[" << i << "]: " << copy[i] << std::endl;
            std::cout << "copy2[" << i << "]: " << copy2[i] << std::endl;
		    std::cout << "\n";
        }
    }

    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    
	std::cout << "\n";
    std::cout << "Quelques tests de l'index out of bound" << std::endl;

    try {
        numbers[-2] = 0;
	} catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    try {
        numbers[MAX_VAL] = 0;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    delete [] mirror;//
    return 0;
}
