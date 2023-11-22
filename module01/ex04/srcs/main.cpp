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

std::string sed(std::string line, std::string OldWord, std::string NewWord)
{
	size_t			i = 0;
	size_t			pos = 0;
	int				len_Old_Word = OldWord.length();

	while (i < line.length())
	{
		pos = line.find(OldWord, i);
		if (pos != std::string::npos)
		{
			line.erase(pos, len_Old_Word);
			line.insert(pos, NewWord);
			i += pos + len_Old_Word;
		}
		i++;
	}
	return (line);
}


int main(int ac, char **av)
{
    if (checkAC(ac))
        return 0;

    std::string		filename = av[1];
    std::string		line;
    std::ifstream	infile;

    std::cout << BLUE << filename << RESET << std::endl;
    infile.open(av[1]);

    if (!infile.is_open() || infile.fail())
    {
        std::cerr << RED << "Error: " << RESET <<  "Can't open file " << av[1] << "." << std::endl;
        return (0);
    }

    std::ofstream	outfile(filename.append(".replace").c_str());

    if (!outfile.is_open() || outfile.fail())
    {
        std::cerr << "Error: open outfile failed." << std::endl;
        return (0);
    }

    while (std::getline(infile, line))
    {	
        if (av[2][0])
            line = sed(line, av[2], av[3]);
        outfile << line << std::endl;
    }

    infile.close();
    outfile.close();

    return 0;
}
