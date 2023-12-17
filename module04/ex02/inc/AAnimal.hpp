#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "colors.hpp"
#include <iostream>
#include <string>

#define DEBUG 1

class AAnimal {
public:
  AAnimal();
  virtual ~AAnimal();

  AAnimal(const AAnimal &);
  AAnimal &operator=(const AAnimal &);

  virtual void makeSound() const = 0;
  std::string getType() const;

protected:
  std::string _type;

private:
};

#endif // !ANIMAL_HPP
