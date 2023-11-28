#ifndef USER_HPP
#define USER_HPP

#include "colors.hpp"
#include <iostream>
#include <string>

#define DEBUG 1

class User
{

public:

    User();

    User(std::string, std::string, int);

    User(const User &);

    User &operator=(const User &);

    ~User();

    void setFirst(std::string);
    void setLast(std::string);
    void setAge(int);

    std::string getFirst(void);
    std::string getLast(void);
    int getAge(void);

private:

    std::string _first;
    std::string _last;
    int _age;
    
};

#endif // !USER_HPP
