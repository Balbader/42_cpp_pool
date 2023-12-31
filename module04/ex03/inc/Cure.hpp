#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
  Cure();
  ~Cure();

  Cure(const Cure &);
  Cure &operator=(const Cure &);

  virtual AMateria *clone() const;
  void use(ICharacter &);
};

#endif // !CURE_HPP
