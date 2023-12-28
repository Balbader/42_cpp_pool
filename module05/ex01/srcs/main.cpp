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
  std::cout << "\n";

  Form loulou("loulou", 42);
  std::cout << loulou;
  std::cout << "\n";

  Form doudou("doudou", -42);
  std::cout << doudou;
  std::cout << "\n";
  return 0;
}
