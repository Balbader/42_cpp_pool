#include "sed.hpp"

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

std::string sed(std::string line, std::string toFind, std::string replace)
{
	size_t i = 0;
	size_t pos = 0;
	int	toFindLen = toFind.length();

	while (i < line.length())
	{
		pos = line.find(toFind, i);

		if (pos != std::string::npos)
		{
			line.erase(pos, toFindLen);
			line.insert(pos, replace);
			i += pos + toFindLen;
		}

		++i;
	}

	return (line);
}


int main(int ac, char **av)
{
    if (checkAC(ac))
        return 0;

    std::string file = av[1];
    std::string line;
    std::ifstream ifs;
    std::ofstream ofs;

    ifs.open(av[1]);
    ofs.open((file.append(".replace").c_str()));

    if (!ifs.is_open() || ifs.fail())
    {
        std::cerr << RED << "Error: " << RESET <<  "Can't open file " << av[1] << "." << std::endl;
        return (-1);
    }

    if (!ofs.is_open() || ofs.fail())
    {
        std::cerr << RED << "Error: open outfile failed." << RESET << std::endl;
        return (-1);
    }

    while (std::getline(ifs, line))
    {	
        if (av[2][0])
            line = sed(line, av[2], av[3]);
        ofs << line << std::endl;
    }

    ifs.close();
    ofs.close();

    return 0;
}
