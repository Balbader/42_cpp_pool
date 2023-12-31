#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
  Dog();
  ~Dog();

  Dog(const Dog &);
  Dog &operator=(const Dog &);

  void makeSound() const;
  Brain *getBrain(void);

private:
  Brain *_brain;
};

#endif // !DOG_HPP
