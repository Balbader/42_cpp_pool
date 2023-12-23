#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
  // std::cout << GREEN << "meta create: " << RESET << std::endl;

  const Animal *meta = new Animal();

  // std::cout << std::endl;

  // std::cout << GREEN << "Dog create: " << RESET << std::endl;
  const Animal *j = new Dog();
  // std::cout << std::endl;

  // std::cout << GREEN << "Cat create: " << RESET << std::endl;
  const Animal *i = new Cat();
  // std::cout << std::endl;

  // std::cout << GREEN << "WrongAnimal create: " << RESET << std::endl;
  const WrongAnimal *k = new WrongAnimal();
  // std::cout << std::endl;

  // std::cout << GREEN << "WrongCat create: " << RESET << std::endl;
  const WrongCat *p = new WrongCat();
  // std::cout << std::endl;

  std::cout << std::endl;
  std::cout << LBLUE << j->getType() << RESET << std::endl;
  std::cout << ORANGE << i->getType() << RESET << std::endl;
  std::cout << GRAY << meta->getType() << RESET << std::endl;
  std::cout << k->getType() << std::endl;
  std::cout << YELLOW << p->getType() << RESET << std::endl;
  std::cout << std::endl;

  j->makeSound();
  i->makeSound();
  meta->makeSound();
  k->makeSound();
  p->makeSound();
  // std::cout << std::endl;

  // std::cout << RED << "meta delete: " << RESET << std::endl;
  delete meta;
  // std::cout << RED << std::endl << "Cat delete: " << RESET << std::endl;
  delete i;
  // std::cout << RED << std::endl << "Dog delete: " << RESET << std::endl;
  delete j;
  // std::cout << RED << std::endl << "WrongAnimal delete: " << RESET <<
  // std::endl;
  delete k;
  // std::cout << RED << std::endl << "WrongCat delete: " << RESET << std::endl;
  delete p;

  return 0;
}
