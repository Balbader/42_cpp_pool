#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class ICharacter {
public:
  ICharacter();
  virtual ~ICharacter();

  virtual void equip(AMateria *) = 0;
  virtual void unequip(int) = 0;
  virtual void use(int, ICharacter &) = 0;

  virtual std::string const &getName() const = 0;
};
#endif // !ICHARACTER_HPP
