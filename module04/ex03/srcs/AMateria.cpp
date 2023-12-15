#include "AMateria.hpp"

// ---------------------------------------------------------------- Constructor
AMateria::AMateria()
{
    if (DEBUG)
        std::cout << "AMateria Base Constructor Called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    if (DEBUG)
        std::cout << "AMateria Base Name Constructor Called" << std::endl;

    this->type_ = type;
}

// ----------------------------------------------------------------- Destructor
AMateria::~AMateria()
{
    if (DEBUG)
        std::cout << "AMateria Base Destructor Called" << std::endl;
}

// ----------------------------------------------------------- Copy Constructor

// ------------------------------------------------------------------- Overload

