#include <iostream>
#include <fstream>
#include <string>
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

int main(int ac, char **av)
{
    if (!checkAC(ac))
        return -1;

    else if (ac == 4)
    {
        std::string line;
        std::ifstream ifs(av[1], std::ios::in);

        if (ifs.is_open())
        {
            while (!ifs.eof())
                line.push_back(ifs.get());
            line.pop_back();
        }

        else
        {
            std::cout << RED << "File can't be opened : " << RESET <<  av[1] << std::endl;
            return (1);
        }

        // Find and replace
        std::string toFind(av[2]);
        std::string replace(av[3]);
        int pos;

        while ((pos = line.find(toFind)) != std::string::npos)
        {
            line.erase(pos, toFind.length());
            line.insert(pos, replace);
        }

        // create and write in file.replace
        std::string replaceFile(av[1]);
        replaceFile.insert(replaceFile.length(), ".replace");

        std::ofstream ofs(replaceFile);

        if (ofs.is_open())
            ofs << line;

        else
        {
            std::cout << "Unable to create " << av[1] << std::endl;
            return (1);
        }
        
        ifs.close();
        ofs.close();
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
