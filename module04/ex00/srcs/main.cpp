#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// const WrongAnimal* k = new WrongCat();
	// const WrongCat* p = new WrongCat();

	std::cout << std::endl;
	std::cout << ORANGE << j->getType() << " " << RESET <<  std::endl;
	std::cout << YELLOW << i->getType() << " " << RESET << std::endl;
	std::cout << GREEN << meta->getType() << " " << RESET << std::endl;
	// std::cout << k->getType() << " " << std::endl;
	// std::cout << p->getType() << " " << std::endl;
	std::cout << std::endl;

	j->makeSound();
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	// k->makeSound();
	// p->makeSound();
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;

	return 0;
}
