#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------- Destructor
// ----------------------------------------------------------------------------
Base::~Base() {
  if (DEBUG)
    std::cout << GREEN << "Base destructor called"
			  << RESET << std::endl;
}


// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Methods
// ----------------------------------------------------------------------------
Base* aCreator() {
    std::cout << LGREEN << "A created" << RESET << std::endl;
    return (new A());
}

Base* bCreator() {
    std::cout << LBLUE << "B created" << RESET << std::endl;
    return (new B());
}

Base* cCreator() {
    std::cout << YELLOW << "C created" << RESET << std::endl;
    return (new C());
}

Base* generate(void) {
    Base*(*functions[3])() = {aCreator, bCreator, cCreator};
    return (functions[rand() % 3]());
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << LGREEN << "A" << RESET << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << LBLUE << "B" << RESET << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << YELLOW << "C" << RESET << std::endl;
    else
        std::cout << "What is this?" << std::endl;
}

void identify(Base& p) {
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << LGREEN "A" << RESET << std::endl;
    } catch(const std::exception& e) {
        try {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << LBLUE << "B" << RESET << std::endl;
        } catch(const std::exception& e) {
            try {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << YELLOW << "C" << RESET << std::endl;
            } catch(const std::exception& e) {
                std::cout << "What is this?" << std::endl;
            }
        }
    }
}
