#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "colors.hpp"
#include <iostream>
#include <string>

#define DEBUG 1

class Animal {
public:
  Animal();
  virtual ~Animal();

  Animal(const Animal &);
  Animal &operator=(const Animal &);

  virtual void makeSound() const = 0;
  std::string getType() const;

protected:
  std::string _type;

private:
};

#endif // !ANIMAL_HPP
