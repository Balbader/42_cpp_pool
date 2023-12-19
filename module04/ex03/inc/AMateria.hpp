#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "colors.hpp"

#include <cstring>
#include <iostream>

#define DEBUG 1

class ICharacter;

class AMateria {
public:
  AMateria(std::string const &);
  virtual ~AMateria();

  AMateria(const AMateria &);
  AMateria &operator=(const AMateria &);

  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &);

  std::string const &getType() const;

protected:
  AMateria();
  std::string type_;
};

#endif // !AMATERIA_HPP
