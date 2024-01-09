#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include "colors.hpp"

#include <iostream>
#include <stdint.h>
#include <string>

#define DEBUG 1

struct Data {
	std::string str;
};

class Serialization {
public:
	Serialization();
	~Serialization();

	Serialization(const Serialization &);
	Serialization &operator=(const Serialization &);

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

private:
	
};

#endif // !SERIALIZATION_HPP
