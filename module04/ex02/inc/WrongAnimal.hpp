#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal : public Animal {

public:
	WrongAnimal();
	~WrongAnimal();

	WrongAnimal(const WrongAnimal &);
	WrongAnimal &operator=(const WrongAnimal &);

	void makeSound() const;
	std::string getType() const;
};

#endif // !WRONGANIMAL_HPP
