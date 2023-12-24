#include "Bureaucrat.hpp"

int main() {
  std::cout << std::endl;

  Bureaucrat basil("Basil", 333);
  Bureaucrat mimi("mimi", -22);
  Bureaucrat faten("faten", 133);

  faten.incrementGrade();
  std::cout << LYELLOW
            << "new grade after incrementGrade(1) : " << faten.getGrade()
            << RESET << '\n';

  faten.decrementGrade();
  faten.decrementGrade();
  std::cout << "new grade after decrementGrade(2) : " << ORANGE
            << faten.getGrade() << RESET << "\n\n";

  std::cout << basil << "\n";
  std::cout << mimi << "\n";
  std::cout << faten << "\n";
  return 0;
}
