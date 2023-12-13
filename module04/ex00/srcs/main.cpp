#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getTypd() << " " << std::endl;
	std::cout << i->getTypd() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	return 0;
}
