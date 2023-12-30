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

  Form transfer("transfer", 144, 42);
  std::cout << transfer;
  std::cout << "\n";

  Form profile("Doudou", -420, 33);
  std::cout << profile;
  std::cout << "\n";
  return 0;
}

// void	createForm(std::string name, int requiredGradeToBeExecuted, int requiredGradeToBeSigned)
// {
// 	Bureaucrat Gurvan;
// 	Form	chess_form;

// 	std ::cout << chess_form;
// 	chess_form.beSigned(Gurvan);
// 	std::cout << "\n\n\n";
// 	Gurvan.signForm(chess_form);

// 	Form	random_form(name, requiredGradeToBeExecuted, requiredGradeToBeSigned);

// 	std ::cout << random_form;
// 	random_form.beSigned(Gurvan);

// }

// int	main(int argc, char **argv)
// {
// 	if (argc != 4) {
// 		std::cerr << "Error: usage is ./bureaucrat <name> <required grade to be executed> <required grade to be signed>.\n";
// 		return (ERROR);
// 	}

// 	try
// 		createForm(argv[1], atoi(argv[2]), atoi(argv[3]));
// 	catch (std::exception)
// 		return (ERROR);

// 	return (SUCCESS);
// }
