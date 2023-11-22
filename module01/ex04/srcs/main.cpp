#include "sed.hpp"

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
