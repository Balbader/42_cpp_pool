#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal* array[10];

	for (int i = 0; i < 10; i++)
	{
        if (i >= 0 && i <= 4)
        {
            std::cout << "======================= " << i;
            array[i] = new Dog();
            array[i]->makeSound();
            std::cout << std::endl;
        }
        else
        {
            std::cout << "======================= " << i;
            array[i] = new Cat();
            array[i]->makeSound();
            std::cout << std::endl;
        }
	}

	for (int i = 9; i >= 0; --i)
    {
        if (i > 4)
            std::cout << "======================= " << i << std::endl;
        else
            std::cout << "======================= " << i << std::endl;

        delete array[i];
        
        std::cout << std::endl;
    }

	return 0;
}
