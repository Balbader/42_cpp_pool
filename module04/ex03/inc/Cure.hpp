#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
  Cure();
  virtual ~Cure();

  Cure(const Cure &);
  Cure &operator=(const Cure &);

  virtual AMateria *clone() const;
  virtual void use(ICharacter &);
};

#endif // !CURE_HPP
