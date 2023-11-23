#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl newComplain;
        std::string level;

        level = av[1];
        newComplain.complain(level);
    }
    return 0;
}
