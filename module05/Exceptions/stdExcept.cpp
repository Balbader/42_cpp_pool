#include <exception>
#include <iostream>

int main() {
  int a = 10;
  int b = 0;
  int c;

  try {
    if (b == 0)
      throw std::runtime_error("Error: divison by 0 is just fucked up!!!\n");
    c = a / b;
    std::cout << "c = " << c << "\n";
  } catch (std::runtime_error &err) {
    std::cout << "Exception occured\n" << err.what();
  }
  return 0;
}
