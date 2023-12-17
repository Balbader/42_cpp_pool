#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
  MateriaSource();
  ~MateriaSource();

  MateriaSource(const MateriaSource &);
  MateriaSource &operator=(const MateriaSource &);

  virtual void learnMateria(AMateria *materia);
  virtual AMateria *createMateria(std::string const &type);

private:
  AMateria *inventory[4];
};

#endif // !MATERIASOURCE_HPP
