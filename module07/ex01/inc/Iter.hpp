#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template<typename T>

void iter(T* array, size_t length, void(*f)(const T&)) {

    if (array) {
        for (size_t i = 0; i < length; i++)
            f(array[i]);
    }
    else
        std::cout << "Stop trying to break my program" << std::endl;
}

//no need for protection because reference and T* not T**
template<typename T>

void print(const T& c) {
    std::cout << c << std::endl;
}

#endif
