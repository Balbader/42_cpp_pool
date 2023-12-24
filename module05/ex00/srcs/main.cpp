#include "Bureaucrat.hpp"

int main() {

  std::cout << std::endl;

  Bureaucrat faten("faten", 133);
  std::cout << "\n" << faten << "\n";

  // ==========================================================================
  faten.incrementGrade(10);
  std::cout << "new grade after incrementGrade(10) : " << LYELLOW
            << faten.getGrade() << RESET << '\n';

  // ==========================================================================
  faten.decrementGrade(5);
  std::cout << "new grade after decrementGrade(5) : " << ORANGE
            << faten.getGrade() << RESET << "\n";

  // ==========================================================================
  // faten.decrementGrade(10);
  // std::cout << "new grade after decrementGrade(10) : " << ORANGE
  //           << faten.getGrade() << RESET << "\n\n";

  // Bureaucrat mimi("mimi", -22);
  // std::cout << mimi << "\n";
  // std::cout << MAGENTA << faten << "\n" << RESET;

  // Bureaucrat basil("Basil", 333);
  // std::cout << basil << "\n";
  return 0;
}
