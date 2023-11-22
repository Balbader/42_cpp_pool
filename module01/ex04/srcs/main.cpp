#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "../inc/colors.hpp"

int checkAC(int ac)
{
    if (ac != 4)
    {
        std::cout << std::endl << RED << "Wrong Input!" << RESET << std::endl;
        std::cout << std::endl << "Please make sure to provide 3 arguments for program execution." << std::endl;
        std::cout << "1. File Name" << std::endl;
        std::cout << "2. String #1" << std::endl;
        std::cout << "3. String #2" << std::endl;
        std::cout << std::endl << YELLOW << "Ex: ./main file.txt \"Hello\" \"World\"" << RESET << std::endl;
        return 1;
    }
    return 0;
}

// std::string findAndReplace(std::string line, std::string toFind, std::string replaceWith)
// {
// }

int main(int ac, char **av)
{
    if (!checkAC(ac))
        return 0;

    else if (ac == 4)
    {
        std::string line;
        std::ifstream ifs;
        std::ofstream ofs;

    }

    return 0;
}

/*
if (ac == 3)
{
    std::string wordToCheck;
    std::string line;
    std::ifstream ifs;
    std::ofstream ofs;

    ifs.open("hello.txt");
    // ifs.open("test.txt");
    ofs.open("test.replace");

    if (ifs.is_open())
    {
        while (std::getline(ifs, line))
        {
            std::cout << line << std::endl;
            std::cout << wordToCheck << std::endl;
            wordToCheck = checkWords(line, wordToCheck);
           if (ofs.is_open())
            {
                if (line.compare(av[1]) == 0)
                    ofs << av[2] << std::endl;
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
*/
