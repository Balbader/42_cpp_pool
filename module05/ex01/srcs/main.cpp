#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  std::cout << "\n";
  Bureaucrat mimi("mimi", 448);
  Bureaucrat riri("riri", -31);
  Bureaucrat fifi("fifi", 42);
  std::cout << fifi << "\n";
  std::cout << riri;
  std::cout << mimi;

  Form loulou("loulou", 42);
  std::cout << loulou;
  std::cout << "\n";
  return 0;
}
