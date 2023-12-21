#include "Bureaucrat.hpp"

int main() {
  std::cout << std::endl;

  Bureaucrat basil("Basil", 333);
  std::cout << std::endl;
  std::cout << "Name : " << GREEN << basil.getName() << RESET << std::endl;
  std::cout << "Grade : " << GREEN << basil.getGrade() << RESET << std::endl;
  std::cout << std::endl;
  return 0;
}
