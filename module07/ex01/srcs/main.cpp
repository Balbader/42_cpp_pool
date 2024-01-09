#include "Iter.hpp"

int main(void) {
    int tab[] = {1, 2, 33, 44};

    ::iter(tab, 4, print);

    std::string lol[] = {
        "rir",
        "fifi",
        "loulou"
    };
    
    ::iter(lol, 3, print);
    
    return (0);
}
