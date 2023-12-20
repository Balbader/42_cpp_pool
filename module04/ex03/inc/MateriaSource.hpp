#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
  MateriaSource();
  ~MateriaSource();

  MateriaSource(const MateriaSource &);
  MateriaSource &operator=(const MateriaSource &);

  virtual void learnMateria(AMateria *);
  virtual AMateria *createMateria(std::string const &);
  int inLearningInventory(AMateria *);

private:
  AMateria *learningInventory_[4];
};

#endif // !MATERIASOURCE_HPP
