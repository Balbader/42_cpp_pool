#include <iostream>
#include <string>
#include <fstream>

int main (int ac, char **av)
{
	// parsing
	if (ac != 4)
    {
		std::cout << "Invalid arguments" << std::endl << "./mySed [file from] [search] [replace]" << std::endl;
		return (1);
	}
	
	// reading file from
	std::string line;
	std::ifstream ifs (av[1], std::ios::in);

	if (ifs.is_open())
    {
		while (!ifs.eof())
			line.push_back(ifs.get());
		line.pop_back();
  	}

	else
    {
		std::cout << "Unable to open " << av[1] << std::endl;
		return (1);
	}

	// search and replace
	std::string str2 (av[2]);
	std::string str3 (av[3]);
	int index;

	while ((index = line.find(str2)) != std::string::npos) {
		line.erase(index, str2.length());
		line.insert(index, str3);
	}

	// create and write in file.replace
	std::string outputFile (av[1]);
    outputFile.insert(outputFile.length(), ".replace");

	std::ofstream ofs (outputFile);

	if (ofs.is_open())
		ofs << line;

	else
    {
		std::cout << "Unable to create " << av[1] << std::endl;
		return (1);
	}
	
	std::cout << "\e[38;5;118mEnd of mySed, search and replace program\e[0m" << std::endl;
    ifs.close();
    ofs.close();
  return 0;
}
