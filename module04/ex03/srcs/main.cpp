#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {

  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  ICharacter *me = new Character("me");
  AMateria *tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);

  ICharacter *bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);

  delete bob;
  delete me;
  delete src;
  return 0;
}

// int main() {

//   IMateriaSource *src1 = new MateriaSource();
//   src1->learnMateria(new Ice());
//   std::cout << std::endl;

//   IMateriaSource *src2 = new MateriaSource();
//   src2->learnMateria(new Cure());
//   std::cout << std::endl;

//   AMateria *tmp1;
//   tmp1 = src1->createMateria("ice");
//   std::cout << "tmp type : " << LBLUE << tmp1->getType() << RESET <<
//   std::endl
//             << std::endl;

//   AMateria *tmp2;
//   tmp2 = src2->createMateria("cure");
//   std::cout << "tmp type : " << ORANGE << tmp2->getType() << RESET <<
//   std::endl
//             << std::endl;

//   ICharacter *jim = new Character("Jim");
//   std::cout << CYAN << jim->getName() << RESET << " instance created."
//             << std::endl
//             << std::endl;

//   ICharacter *bob = new Character("bob");
//   std::cout << CYAN << bob->getName() << RESET << " instance created."
//             << std::endl
//             << std::endl;

//   jim->use(0, *bob);
//   bob->use(1, *jim);

//   delete bob;
//   delete jim;
//   std::cout << std::endl;

//   delete tmp1;
//   std::cout << std::endl;
//   delete tmp2;

//   delete src1;
//   delete src2;

//   return 0;
// }
