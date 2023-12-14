#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {

public:
	Brain();
	~Brain();

	Brain(const Brain &);
	Brain &operator=(const Brain &);

    const char *ideas[100];

private:
	
};

#endif // !BRAIN_HPP
