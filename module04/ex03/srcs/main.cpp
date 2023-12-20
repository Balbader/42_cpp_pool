#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

// int main() {

//   IMateriaSource *src = new MateriaSource();
//   src->learnMateria(new Ice());
//   src->learnMateria(new Cure());

//   ICharacter *me = new Character("me");
//   AMateria *tmp;
//   tmp = src->createMateria("ice");
//   me->equip(tmp);
//   tmp = src->createMateria("cure");
//   me->equip(tmp);

//   ICharacter *bob = new Character("bob");
//   me->use(0, *bob);
//   me->use(1, *bob);

//   delete bob;
//   delete me;
//   delete src;
//   return 0;
// }

// int main() {

//   IMateriaSource *Flo = new MateriaSource();
//   Flo->learnMateria(new Ice());

//   AMateria *flo;
//   flo = Flo->createMateria("ice");
//   std::cout << flo->getType() << std::endl;

//   ICharacter *basil = new Character("Basil");
//   basil->equip(flo);

//   ICharacter *balou = new Character("Balou");

//   delete flo;

//   basil->unequip(0);

//   basil->use(0, *balou);

//   return 0;
// }
