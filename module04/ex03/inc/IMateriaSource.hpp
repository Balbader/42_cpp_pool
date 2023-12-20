#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {
public:
  virtual ~IMateriaSource(){};

  virtual void learnMateria(AMateria *) = 0;
  virtual AMateria *createMateria(std::string const &) = 0;

protected:
  IMateriaSource();
  IMateriaSource(const IMateriaSource &);
  IMateriaSource &operator=(const IMateriaSource &);
};

#endif // !IMATERIASOURCE_HPP
