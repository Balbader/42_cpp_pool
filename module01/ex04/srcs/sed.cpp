#include "sed.hpp"

int checkAC(int ac)
{
    if (ac != 4)
    {
        std::cout << std::endl << RED << BOLD << "WRONG INPUT!" << RESET << std::endl;
        std::cout << std::endl << "Please make sure to provide 3 arguments for program execution." << std::endl;
        std::cout << std::endl << "Ex: " << GREEN << BOLD << "./sed file.txt \"Search\" \"Replace\"" << RESET << std::endl;

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
