#include "Bureaucrat.hpp"

int main() {
  std::cout << std::endl;

  // Bureaucrat mimi("mimi", -22);
  Bureaucrat faten("faten", 133);
  std::cout << faten << "\n";

  faten.incrementGrade(10);
  std::cout << LYELLOW
            << "new grade after incrementGrade(10) : " << faten.getGrade()
            << RESET << '\n';

  faten.decrementGrade(5);
  std::cout << "new grade after decrementGrade(5) : " << ORANGE
            << faten.getGrade() << RESET << "\n";
  faten.decrementGrade(10);
  std::cout << "new grade after decrementGrade(10) : " << ORANGE
            << faten.getGrade() << RESET << "\n\n";

  // std::cout << basil << "\n";
  // std::cout << mimi << "\n";
  std::cout << faten << "\n";

  // Bureaucrat basil("Basil", 333);
  return 0;
}
