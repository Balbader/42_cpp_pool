#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	Dog(const Dog &);
	Dog &operator=(const Dog &);
	~Dog();

	virtual void makeSoud() const;

protected:

private:
	
};

// std::ostream & operator<<(std::ostream & lhs, Dog const & rhs);

#endif // !DOG_HPP
