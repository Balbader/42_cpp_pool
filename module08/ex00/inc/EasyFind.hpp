#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>

template<typename T>

typename T::iterator easyfind(T& container, int toFind) {
    typename T::iterator it = std::find(container.begin(), container.end(), toFind);

    if (it == container.end())
        throw std::invalid_argument("Argument invalide");

    return it;
    //if not found returns the container.end()
}

#endif
