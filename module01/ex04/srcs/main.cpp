#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{

    std::ifstream ifs("numbers");
    unsigned int dst = 1;
    unsigned int dst2 = 2;

    ifs >> dst >> dst2;

    std::cout << dst << " " << dst2 << std::endl;

    ifs.close();

    return 0;
}

/*

std::ifstream ifs("numbers");
unsigned int dst = 1;
unsigned int dst2 = 2;

ifs >> dst >> dst2;
std::cout << dst << " " << dst2 << std::endl;
ifs.close();

std::ofstream ofs("test.out");
ofs << "Hello World" << std::endl;
ofs.close();

*/
