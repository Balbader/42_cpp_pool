#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {

  IMateriaSource *src = new MateriaSource();
  std::cout << std::endl;

  src->learnMateria(new Ice());
  std::cout << std::endl;

  src->learnMateria(new Cure());
  std::cout << std::endl;

  ICharacter *me = new Character("me");
  AMateria *tmp;
  tmp = src->createMateria("ice");
  std::cout << std::endl;
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);

  ICharacter *bob = new Character("bob");
  std::cout << ORANGE << bob->getName() << RESET << " instance created."
            << std::endl;
  me->use(0, *bob);
  me->use(1, *bob);

  delete bob;
  std::cout << std::endl;
  delete me;
  std::cout << std::endl;
  delete src;

  return 0;
}
