#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

#include <iostream>
#include <string>

class Character : public ICharacter {
public:
  Character(std::string const &);
  ~Character();

  Character(const Character &);
  Character &operator=(const Character &);

  void equip(AMateria *);
  void unequip(int);
  void use(int, ICharacter &);

  const std::string &getName() const;

protected:
  Character();
  AMateria **getInventory() const;
  std::string name_;
  AMateria *inventory_[4];
};

#endif // !CHARACTER_HPP
