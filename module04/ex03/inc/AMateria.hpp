#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "colors.hpp"
#include <iostream>

#define DEBUG 1

class AMateria
{

public:
    AMateria();
    ~AMateria();

    AMateria(std::string const &);

    AMateria(const AMateria &);
    AMateria &operator=(const AMateria &);

    std::string const& getType() const;

    virtual AMateria* clone() const = 0;
    // virtual void use(ICharacter &);

protected:
    std::string type_;

private:
    
};

#endif // !AMATERIA_HPP
