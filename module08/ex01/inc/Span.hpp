#ifndef SPAN_HPP
#define SPAN_HPP

#include "colors.hpp"

#include <iostream>
#include <exception>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

#define DEBUG 1

class Span {

    public:

        typedef std::vector<int>::iterator ITER;

        Span(unsigned int);
        ~Span();

        Span(const Span&);
        Span& operator=(const Span&);

        class TooSmallException : public std::exception {
            public:
                virtual const char * what () const throw() {
                    return "Not enough elements to find span";
                }
        };
        
        class TooBigException : public std::exception {
            public:
                virtual const char * what () const throw() {
                    return "Can't add any more numbers";
                }
        };

        void	addNumber(int);
        void	addRange(ITER, ITER);
        int		shortestSpan();
        int		longestSpan();

    private:

        std::vector<int> _v;
        std::size_t _s;
        Span();
};

#endif
