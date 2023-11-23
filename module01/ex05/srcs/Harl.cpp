#include "Harl.hpp"

// Constructor - Destructor
Harl::Harl()
{
    if (TOGGLE)
        std::cout << std::endl << LYELLOW << "Harl instance created" << RESET << std::endl;
}
Harl::~Harl()
{
    if (TOGGLE)
        std::cout << LRED << "Harl instance destroyed" << RESET << std::endl;
}


// Public Member Functions
void Harl::complain(std::string level)
{
    void(Harl::*ptr[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    int temp;

    temp = this->_checkComplain(level);
    std::cout << std::endl;
    std::cout << "Level : " << temp << " - " << (level == "" ? level = "..." : level = level) << std::endl;

    switch (temp)
    {
        case 1:
            (this->*ptr[0])();
            break;

        case 2:
            (this->*ptr[1])();
            break;

        case 3:
            (this->*ptr[2])();
            break;

        case 4:
            (this->*ptr[3])();
            break;

        default:
            std::cout << GREEN << "No complaining going on!" << RESET << std::endl;
            break;
    }
}


// Private Member Functions
int Harl::_checkComplain(std::string level)
{
    int type = 0;

    if (level == "")
        type = 0;
    if (level == "DEBUG" || level == "debug")
        type = 1;
    if (level == "INFO" || level == "info")
        type = 2;
    if (level == "WARNING" || level == "warning")
        type = 3;
    if (level == "ERROR" || level == "error")
        type = 4;

    return type;
}

void Harl::_debug(void)
{
    std::cout << CYAN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << RESET << std::endl;
    std::cout << std::endl;
}


void Harl::_info(void)
{
    std::cout << MAGENTA << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << RESET << std::endl;
    std::cout << std::endl;
}


void Harl::_warning(void)
{
    std::cout << ORANGE << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << RESET << std::endl;
    std::cout << std::endl;
}


void Harl::_error(void)
{
    std::cout << RED << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
    std::cout << std::endl;
}
