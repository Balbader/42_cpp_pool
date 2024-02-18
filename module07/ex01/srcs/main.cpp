#include "Iter.hpp"

int main(void) {
    int tab[] = {1, 2, 33, 44};

    ::iter(tab, 4, print);

    std::string names[] = {
        "riri",
        "fifi",
        "loulou"
    };
    
    ::iter(names, 3, print);
    
    return (0);
}
