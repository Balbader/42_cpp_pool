#include "Array.hpp"

// ----------------------------------------------------------------------------
// ---------------------------------------------------------------- Constructor
// ----------------------------------------------------------------------------
template<typename T>
Array::Array() {
	sizeTab = 0;
	tab = new T[0];
}

template<typename T>
Array::Array(unsigned int n) {
	sizeTab = n;
	tab = new T[n];
	for(unsigned int i = 0; i < n; i++) {
		tab[i] = 0;
	}
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------- Copy Constructor
// ----------------------------------------------------------------------------
template<typename T>
Array::Array(const Array& rhs) {
	this->sizeTab = rhs.size();
	this->tab = new T[rhs.size()];
	for(unsigned int i = 0; i < rhs.size(); i++) {
		this->tab[i] = rhs[i]; //good si object bicoz appelle surcharge de l'operateur = 
	}
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------------- Destructor
// ----------------------------------------------------------------------------
template<typename T>
Array::~Array() {
	delete [] tab;
}


// ----------------------------------------------------------------------------
// ------------------------------------------------------------------- Overload
// ----------------------------------------------------------------------------
template<typename T>
Array::Array& operator=(const Array& rhs) {
	delete [] tab; //very deep copy
	sizeTab = rhs.size();
	tab = new T[rhs.size()];
	for (unsigned int i = 0; i < rhs.size(); i++) {
		tab[i] = rhs[i];
	}
	return (*this);
}


// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Methods
// ----------------------------------------------------------------------------
//unsigned int, if a negative number is sent it will automatically overflow
template<typename T>
Array::T& operator[](unsigned int index) {
	if (index >= this->sizeTab) 
		throw std::out_of_range("Out of range exception");
	return (this->tab[index]);
}

template<typename T>
const Array::T& operator[](unsigned int index) const {
	if (index >= this->sizeTab)
		throw std::out_of_range("Out of range exception");
	return (this->tab[index]);
}

// ----------------------------------------------------------------------------
// -=------------------------------------------------------------------- Getter
// ----------------------------------------------------------------------------
unsigned int Array::getSize() const { return (this->sizeTab); }
