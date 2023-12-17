#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
  AAnimal *array[10];
  // AAnimal h;

  for (size_t i = 0; i < 10; i++) {
    std::cout << "----------------------> " << i;

    if (i < 5)
      array[i] = new Dog();
    else
      array[i] = new Cat();

    array[i]->makeSound();

    std::cout << std::endl;
  }

  for (size_t i = 0; i < 10; i++) {
    std::cout << "----------------------> " << i << std::endl;

    delete array[i];

    std::cout << std::endl;
  }

  return 0;
}
