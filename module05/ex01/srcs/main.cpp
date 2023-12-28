#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  std::cout << "\n";

  Bureaucrat ceo("Mimi", 448);
  Bureaucrat coo("Riri", -31);
  Bureaucrat cfo("Fifi", 42);

  std::cout << cfo << "\n";
  std::cout << coo;
  std::cout << ceo;
  std::cout << "\n";

  Form transfer("transfer", 144);
  std::cout << transfer;
  std::cout << "\n";

  Form profile("Doudou", -420);
  std::cout << profile;
  std::cout << "\n";
  return 0;
}
