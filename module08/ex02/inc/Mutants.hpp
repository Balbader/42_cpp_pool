#ifndef MUTANTS_HPP
#define MUTANTS_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>

class Mutants : public std::stack<T> {
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        Mutants() {};

        ~Mutants() {};

        Mutants( const Mutants& rhs ) { *this = rhs; }

        Mutants& operator=(const Mutants& rhs) {

            if (this != &rhs) {
                std::stack<T>::operator=(rhs);
            }

            return *this;
        }

        iterator begin() { 
            return this->c.begin(); 
        }

        iterator end() { 
            return this->c.end(); 
        }

        const_iterator begin() const { 
            return this->c.begin(); 
        }

        const_iterator end() const { 
            return this->c.end(); 
        }
};


#endif
