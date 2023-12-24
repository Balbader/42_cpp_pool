#include "Bureaucrat.hpp"

int main() {

  std::cout << std::endl;

  Bureaucrat faten("faten", 133);
  std::cout << "\n" << faten << "\n";

  faten.incrementGrade();
  // faten.decrementGrade();

  return 0;
}
