#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {

  Animal *array[10];

  for (size_t i = 0; i < 10; i++) {
    std::cout << "----------------------> " << CYAN << i << RESET;

    if (i <= 4)
      array[i] = new Dog();
    else
      array[i] = new Cat();

    array[i]->makeSound();
    std::cout << std::endl;
  }

  for (size_t i = 0; i < 10; i++) {
    std::cout << "----------------------> " << CYAN << i << RESET << std::endl;
    delete array[i];
    std::cout << std::endl;
  }

  return 0;
}
