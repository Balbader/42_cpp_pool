#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Error: Usage is ./RPN <Inverted Polish mathematical expression>\n"; 
		return (ERROR);
	}

	try {

		RPN rpn;

		rpn.parseInput(argv[1]);
		rpn.readAndCalculate(argv[1]);

		std::cout << rpn.getResult() << std::endl;
		return (SUCCESS);

	} catch(const std::exception& e) {
		std::cerr << "Error: " << e.what() << '\n';
	}

	return (ERROR);
}
