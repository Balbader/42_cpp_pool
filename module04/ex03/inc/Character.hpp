#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

#include <iostream>
#include <string>

class Character : public ICharacter {
public:
  Character();
  ~Character();

  Character(std::string const &);

  Character(const Character &);
  Character &operator=(const Character &);

  void equip(AMateria *);
  void unequip(int);
  void use(int, ICharacter &);
  int inInventory(AMateria *);

  void setName(std::string const &);
  const std::string &getName() const;

private:
  std::string name_;
  AMateria *inventory_[4];
};

#endif // !CHARACTER_HPP
