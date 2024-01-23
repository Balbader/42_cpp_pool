#include "Bureaucrat.hpp"

int main() {
  std::cout << "\n";
  Bureaucrat mimi("mimi", 448);
  std::cout << "mimi\n" << mimi << "\n";

  Bureaucrat riri("riri", -31);
  std::cout << "riri\n" << riri << "\n";

  Bureaucrat fifi("fifi", 42);
  std::cout << "fifi\n" << fifi;

  return 0;
}
