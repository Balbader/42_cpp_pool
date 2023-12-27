#include <exception>
#include <iostream>

int main() {
  try {
    try {
      throw "a char exception\n";
    } catch (const char *e) {
      std::cout << "Character type in inner block : " << e << std::endl;
      std::cout << "Re throwing exception : " << std::endl;
      throw std::runtime_error("runtime_error !!!");
    }
  } catch (const char *e) {
    std::cout << "Character type in outer block : " << e << std::endl;
  } catch (...) {
    std::cout << "Unexcepted exception in outer block : " << std::endl;
  }
  return 0;
}
