#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <cstdlib>

template<typename T>

class Array
{
public:
	// constructor with unsigned int
	Array(unsigned int n) {
		tabSize = n;
		tab = new T[n];

		for(unsigned int i = 0; i < n; i++) {
			tab[i] = 0;
		}
	}
	
	// construction by copy
	Array(const Array& rhs) {

		this->tabSize = rhs.size();
		this->tab = new T[rhs.size()];

		for(unsigned int i = 0; i < rhs.size(); i++) {
			this->tab[i] = rhs[i]; //good si object bicoz appelle surcharge de l'operateur = 
		}
	}

	// assignment operator
	Array& operator=(const Array& rhs) {
		delete [] tab; //very deep copy
		tabSize = rhs.size();
		tab = new T[rhs.size()]; // new template created with its own memory space

		for (unsigned int i = 0; i < rhs.size(); i++) {
			tab[i] = rhs[i];
		}

		return (*this);
	}

	// destructor
	~Array() {
		delete [] tab;
	}

	// methods
	//unsigned int, if a negative number is sent it will automatically overflow
	T& operator[](unsigned int index) {
		if (index >= this->tabSize) 
			throw std::out_of_range("Out of range exception");
		return (this->tab[index]);
	}

	const T& operator[](unsigned int index) const {
		if (index >= this->tabSize)
			throw std::out_of_range("Out of range exception");
		return (this->tab[index]);
	}
	
	unsigned int size() const {
		return (this->tabSize);
	}

private:
    // constructor with no parameters
	T* tab; 
	unsigned int tabSize;

	Array() {
		tabSize = 0;
		tab = new T[0];
	}
};

#endif
