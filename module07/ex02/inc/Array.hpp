#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <cstdlib>

template<typename T>

//FIX: check how to define the class parameters in a different file
class Array {
public:
	Array(unsigned int);
	~Array();

	Array(const Array&);
	Array& operator=(const Array&);
	
	T& operator[](unsigned int);
	const T& operator[](unsigned int) const;
	unsigned int getSize() const;

private:
	T* tab;
	unsigned int sizeTab;

	Array();
};

#endif
