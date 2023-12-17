#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
  Cure(std::string);
  ~Cure();

  // Cure(const Cure &);
  Cure &operator=(const Cure &);

protected:
  Cure();

private:
};

#endif // !CURE_HPP
