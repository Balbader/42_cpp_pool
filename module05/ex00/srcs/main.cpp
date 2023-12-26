#include "Bureaucrat.hpp"

int main() {

  std::cout << std::endl;

  Bureaucrat faten("faten", 133);
  std::cout << "\n" << faten;

  faten.incrementGrade();
  std::cout << "\n" << faten;

  faten.decrementGrade();
  std::cout << "\n" << faten;

  std::cout << "\n\n";
  Bureaucrat mimi("mimi", 448);
  std::cout << "\n" << mimi;

  return 0;
}
