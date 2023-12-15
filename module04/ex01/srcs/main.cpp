#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal* array[10];
	for (int i = 0; i < 5; i++)
	{
		array[i] = new Dog();
		array[i]->makeSound();
		// std::cout << array[i]->getBrain() << std::endl;
	}
	for (int i = 5; i < 10; i++)
		array[i] = new Cat();
	for (int i = 0; i < 5; i++)
		delete array[i];
	for (int i = 5; i < 10; i++)
		delete array[i];

	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	Cat *test1;
	test1 = new Cat();
	Cat test3 = *test1;
	// Cat test3(*test1);
	// Cat test3;
	// test3 = *test1;
	delete test1;
	std::cout << "test////" << test3.getBrain()->getIdea(0) << std::endl;

	// std::cout << "test" <<test1.getBrain() << std::endl;
	// std::cout << "test" <<test3.getBrain() << std::endl;

	// delete j;
	// delete i;

	return 0;
}
