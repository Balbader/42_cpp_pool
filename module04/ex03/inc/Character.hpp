#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character {
public:
  Character();
  virtual ~Character();

  Character(const Character &);
  Character &operator=(const Character &);

  virtual void equip(AMateria *);
  virtual void unequip(int);
  virtual void use(int, ICharacter &);

  const std::string &getName() const;

private:
  std::string _name;
  AMateria *inventory[4];
};

#endif // !CHARACTER_HPP
