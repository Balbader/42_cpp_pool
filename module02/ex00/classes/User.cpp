#include "User.hpp"

User::User() {};

User::User(std::string first, std::string last, int age)
{
    if (DEBUG)
        std::cout << LGREEN << "User instance created." << RESET << std::endl;

    this->_first = first;
    this->_last = last;
    this->_age = age;
}

User::User(const User& original)
{
    *this = original;
}

User &User::operator=(const User& original)
{
    if (DEBUG)
        std::cout << GREEN << "User copy instance created." << RESET << std::endl;

    this->_first = original._first;
    this->_last = original._last;
    this->_age = original._age;

    return *this;
}

User::~User()
{
    if (DEBUG)
        std::cout << RED << "User instance destroyed." << RESET << std::endl;
}


// Setters
void User::setFirst(std::string first)
{
    this->_first = first;
}

void User::setLast(std::string last)
{
    this->_last = last;
}

void User::setAge(int age)
{
    this->_age = age;
}


// Getters
std::string User::getFirst()
{
    return this->_first;
}

std::string User::getLast()
{
    return this->_last;
}

int User::getAge()
{
    return this->_age;
}
