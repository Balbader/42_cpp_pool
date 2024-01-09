#include "Functions.tpp"
#include "colors.hpp"

#include <iostream>
#include <string>

template<typename T>
T& swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T& min(T& a, T& b) {
    if (a < b)
        return (a);
    else
        return (b);
}

template<typename T>
T& max(T& a, T& b) {
    if (a > b)
        return (a);
    else
        return (b);
}
