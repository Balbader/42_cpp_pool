#include <iostream>
#include <fstream>
#include <string>

std::string checkWords(std::string line, std::string wordToCheck)
{
    std::string word;
    int i = 0;

    while (line[i] != ' ')
    {
        std::cin >> word;
        ++i;
    }

    return word;
}

int main(int ac, char **av)
{
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

    return 0;
}
