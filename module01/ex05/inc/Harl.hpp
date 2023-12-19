#ifndef HARL_HPP
#define HARL_HPP

#include "colors.hpp"
#include <iostream>
#include <string>

#define TOGGLE 1

class Harl {
public:
  Harl();
  ~Harl();

  void complain(std::string);

private:
  void _debug(void);
  void _info(void);
  void _warning(void);
  void _error(void);
  int _checkComplain(std::string);
};

#endif // !HARL_HPP
