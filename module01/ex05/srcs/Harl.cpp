#include "Harl.hpp"

// Constructor - Destructor
Harl::Harl()
{
    if (TOGGLE)
        std::cout << LYELLOW << "Harl instance created" << RESET << std::endl;
}
Harl::~Harl()
{
    if (TOGGLE)
        std::cout << LRED << "Harl instance destroyed" << RESET << std::endl;
}


// Public Member Functions
void Harl::complain(std::string type)
{
    Harl newComplain;
    int temp = 0;

    temp = _checkComplain(type);

    switch (temp)
    {

        case 1:
            newComplain._debug();
            break;

        case 2:
            newComplain._info();
            break;

        case 3:
            newComplain._warning();
            break;

        case 4:
            newComplain._error();
            break;

        default:
            std::cout << GREEN << "No complaining going on!" << RESET << std::endl;
            break;
    }
}


// Private Member Functions
void Harl::_debug(void)
{
    std::cout << CYAN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << RESET << std::endl;
}


void Harl::_info(void)
{
    std::cout << MAGENTA << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << RESET << std::endl;
}


void Harl::_warning(void)
{
    std::cout << ORANGE << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << RESET << std::endl;
}


void Harl::_error(void)
{
    std::cout << RED << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}


int Harl::_checkComplain(std::string complain)
{
    int type = 0;

    if (complain == "")
        type = 0;
    if (complain == "DEBUG" || complain == "debug")
        type = 1;
    if (complain == "INFO" || complain == "info")
        type = 2;
    if (complain == "WARNING" || complain == "warning")
        type = 3;
    if (complain == "ERROR" || complain == "error")
        type = 4;

    return type;
}
