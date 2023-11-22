#include <iostream>
#include <fstream>
#include <string>

/*
 * compare function : str1.compare(str2)
*/

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::string line;
        std::ifstream ifs;
        std::ofstream ofs;

        ifs.open("test.txt");
        ofs.open("test.replace");

        if (ifs.is_open())
        {
            while (std::getline(ifs, line))
            {
               if (ofs.is_open())
                {
                    if (line.compare(av[1]) == 0)
                    {
                        std::cout << "Line :" <<  line << std::endl;
                        ofs << line << std::endl;
                        ofs << line << std::endl;
                    }
                }
            }
            ifs.close();
            ofs.close();
        }
    }
    else 
        std::cout << "You Fucked" << std::endl;

    // std::ofstream ofs("test.replace");

    // ofs << "Hello world" << std::endl;
    // ofs.close();

    return 0;
}
