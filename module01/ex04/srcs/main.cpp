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
        std::cout << std::endl << YELLOW << "Ex: ./sed file.txt \"Search\" \"Replace\"" << RESET << std::endl;

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
        return -1;

    else if (ac == 4)
    {
        std::string line;
        std::ifstream ifs;

        ifs.open(av[1]);

        if (ifs.is_open())
        {
            while (!ifs.eof())
                line.push_back(ifs.get());
            line.pop_back();
            std::cout << GREEN << line << RESET << std::endl; // to delete
        }

        else
        {
            std::cout << RED << "File can't be opened : " << RESET <<  av[1] << std::endl;
            return (-1);
        }
        ifs.close();

        // Find and replace
        std::string find(av[2]);
        std::string replace(av[3]);
        int pos;

        while ((pos = line.find(find)) != std::string::npos)
        {
            line.erase(pos, find.length());
            line.insert(pos, replace);
        }

        // create and write in file.replace
        std::string replaceFile (av[1]);
        replaceFile.insert(replaceFile.length(), ".replace");

        std::ofstream ofs(replace);


        if (ofs.is_open())
            ofs << line;

        else
        {
            std::cout << "Unable to create " << av[1] << std::endl;
            return (1);
        }
        
        std::cout << "\e[38;5;118mEnd of mySed, search and replace program\e[0m" << std::endl;
        }

    return 0;
}

/*
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
*/
