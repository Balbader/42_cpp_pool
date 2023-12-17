#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character {
public:
  Character();
  virtual ~Character();

  Character(const Character &);
  Character &operator=(const Character &);

  const std::string &getName() const;

private:
  std::string _name;
  AMateria *inventory[4];
};

#endif // !CHARACTER_HPP
