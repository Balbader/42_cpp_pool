#include "Harl.hpp"

// Constructor - Destructor
Harl::Harl()
{
    if (TOGGLE)
        std::cout << std::endl << LGREEN << "Harl instance created" << RESET << std::endl;
}
Harl::~Harl()
{
    if (TOGGLE)
        std::cout << std::endl << RED << "Harl instance destroyed" << RESET << std::endl;
}


// Public Member Functions
void Harl::complain(std::string level)
{
    void(Harl::*ptr[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    int temp;

    temp = this->_checkComplain(level);

    switch (temp)
    {
        case 1:
            this->_printLevel("DEBUG");
            (this->*ptr[0])();
            this->_printLevel("INFO");
            (this->*ptr[1])();
            this->_printLevel("WARNING");
            (this->*ptr[2])();
            this->_printLevel("ERROR");
            (this->*ptr[3])();
            break;

        case 2:
            this->_printLevel("INFO");
            (this->*ptr[1])();
            this->_printLevel("WARNING");
            (this->*ptr[2])();
            this->_printLevel("ERROR");
            (this->*ptr[3])();
            break;

        case 3:
            this->_printLevel("WARNING");
            (this->*ptr[2])();
            this->_printLevel("ERROR");
            (this->*ptr[3])();
            break;

        case 4:
            this->_printLevel("ERROR");
            (this->*ptr[3])();
            break;

        default:
            std::cout << std::endl << "[ " << "Probably complaining about insignificant problems" << " ]" << std::endl;
            break;
    }
}


// Private Member Functions
int Harl::_checkComplain(std::string level)
{
    int type = 0;

    if (level == "DEBUG" || level == "debug")
        type = 1;
    else if (level == "INFO" || level == "info")
        type = 2;
    else if (level == "WARNING" || level == "warning")
        type = 3;
    else if (level == "ERROR" || level == "error")
        type = 4;

    return type;
}

void Harl::_printLevel(std::string level)
{
    int colorNumber = _checkComplain(level);

    switch (colorNumber)
    {
        case 1:
            std::cout << std::endl << LCYAN << "[ " << (level == "" ? level = "..." : level = level) << " ]" << RESET <<std::endl;
            break;

        case 2:
            std::cout << std::endl << LMAGENTA << "[ " << (level == "" ? level = "..." : level = level) << " ]" << RESET <<std::endl;
            break;

        case 3:
            std::cout << std::endl << LYELLOW << "[ " << (level == "" ? level = "..." : level = level) << " ]" << RESET <<std::endl;
            break;

        case 4:
            std::cout << std::endl << LRED << "[ " << (level == "" ? level = "..." : level = level) << " ]" << RESET <<std::endl;
            break;

        default:
            std::cout << std::endl << "[ " << "Probably complaining about insignificant problems" << " ]" << std::endl;
            break;
    }
}

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
    std::cout << LYELLOW << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << RESET << std::endl;
}


void Harl::_error(void)
{
    std::cout << LRED << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}
