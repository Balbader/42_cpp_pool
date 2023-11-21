#include <iostream>
#include <fstream>
#include <string>

/*
 * compare function : str1.compare(str2)
*/

int main(int ac, char **av)
{
    std::string line;
    std::ifstream ifs;

    ifs.open("test.txt");

    if (ifs.is_open())
    {

        while (std::getline(ifs, line))
        {
            std::cout << line << std::endl;
        }

        ifs.close();
    }

    // std::ofstream ofs("test.replace");

    // ofs << "Hello world" << std::endl;
    // ofs.close();

    return 0;
}
