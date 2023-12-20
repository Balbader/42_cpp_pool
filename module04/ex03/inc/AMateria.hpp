#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "colors.hpp"

#include <cstring>
#include <iostream>

// #define DEBUG 1
#define DEBUG 0

class ICharacter;

class AMateria {
public:
  virtual ~AMateria();

  AMateria &operator=(const AMateria &);

  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &) = 0;

  std::string const &getType() const;

protected:
  std::string type_;

  AMateria();
  AMateria(std::string const &);
  AMateria(const AMateria &);
};

#endif // !AMATERIA_HPP
