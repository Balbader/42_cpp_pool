#ifndef BASE_HPP
#define BASE_HPP

#include "colors.hpp"

#include <iostream>
#include <cstdlilb>

class Base {
public:
	virtual ~Base();
};

Base*   generate(void);
void    identify(Base* p);
void    identify(Base& p);

Base*   aCreator();
Base*   bCreator();
Base*   cCreator();

#endif // !BASE_HPP
