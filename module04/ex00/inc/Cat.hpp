#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &);
	Cat &operator=(const Cat &);
	~Cat();

	virtual void makeSoud();

protected:

private:
	
};

// std::ostream & operator<<(std::ostream & lhs, Cat const & rhs);

#endif // !CAT_HPP
