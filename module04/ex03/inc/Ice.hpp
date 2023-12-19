#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
  Ice();
  ~Ice();

  Ice(std::string const &);

  Ice(const Ice &);
  Ice &operator=(const Ice &);

  AMateria *clone() const;
  void use(ICharacter &);
};

#endif // !ICE_HPP
