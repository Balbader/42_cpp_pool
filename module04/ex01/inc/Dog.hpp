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

protected:

private:
    Brain*;
	
};

// std::ostream & operator<<(std::ostream & lhs, Dog const & rhs);

#endif // !DOG_HPP
