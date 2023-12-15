#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongAnimal();
	const WrongCat* p = new WrongCat();

	std::cout << std::endl;
	std::cout << LBLUE << j->getType() << " " << RESET <<  std::endl;
	std::cout << GREEN << i->getType() << " " << RESET << std::endl;
	std::cout << GRAY << meta->getType() << " " << RESET << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << YELLOW << p->getType() << " " << RESET << std::endl;
	std::cout << std::endl;

	j->makeSound();
	i->makeSound();
	meta->makeSound();
	k->makeSound();
	p->makeSound();
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;

	return 0;
}
