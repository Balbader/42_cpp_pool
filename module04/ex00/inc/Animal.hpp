#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define DEBUG 1

class Animal {
public:
	Animal();
	Animal(const Animal &);
	Animal &operator=(const Animal &);
	~Animal();

	virtual void makeSound(void);

protected:
	std::string type;

private:
	
};

std::ostream & operator<<(std::ostream & lhs, Animal const & rhs);

#endif // !ANIMAL_HPP
