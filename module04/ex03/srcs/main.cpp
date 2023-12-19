#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {

  IMateriaSource *src1 = new MateriaSource();
  std::cout << std::endl;

  src1->learnMateria(new Ice());
  std::cout << std::endl;

  IMateriaSource *src2 = new MateriaSource();
  std::cout << std::endl;

  src2->learnMateria(new Cure());
  std::cout << std::endl;

  // ICharacter *me = new Character("me");
  // std::cout << std::endl;

  // AMateria *tmp;
  // tmp = src1->createMateria("ice");
  // std::cout << "tmp type : " << LBLUE << tmp->getType() << RESET <<
  // std::endl;

  // me->equip(tmp);

  // std::cout << std::endl;

  // tmp = src->createMateria("cure");
  // // std::cout << "tmp type : " << GREEN << tmp->getType() << RESET <<
  // // std::endl;
  // me->equip(tmp);

  // ICharacter *bob = new Character("bob");
  // std::cout << ORANGE << bob->getName() << RESET << " instance created."
  //           << std::endl;

  // // std::cout << YELLOW << bob->getType() << RESET << std::endl;

  // me->use(0, *bob);
  // me->use(1, *bob);

  // delete bob;
  // delete me;
  delete src1;
  delete src2;

  return 0;
}
