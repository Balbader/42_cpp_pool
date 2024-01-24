#include <exception>
#include <iostream>

int main() {
  int a = 10;
  int b = 0;
  int c;

  try {
    if (b == 0)
      throw "Error: divison by 0 is just fucked up!!!\n";
    c = a / b;
    std::cout << "c = " << c << "\n";
  } catch (const char *e) {
    std::cerr << "Exception occured" << std::endl << e;
  }
  return 0;
}
