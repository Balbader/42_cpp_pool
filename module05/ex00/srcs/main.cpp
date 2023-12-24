#include "Bureaucrat.hpp"

int main() {

  std::cout << std::endl;

  Bureaucrat faten("faten", 133);
  std::cout << "\n" << faten << "\n";

  faten.incrementGrade();
  std::cout << "\n" << faten << "\n";

  faten.decrementGrade();
  std::cout << "\n" << faten << "\n";

  return 0;
}
