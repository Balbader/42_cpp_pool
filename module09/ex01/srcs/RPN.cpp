#include "RPN.hpp"

// ----------------------------------------------------------------------------
// ---------------------------------------------------------------- Constructor
// ----------------------------------------------------------------------------
RPN::RPN() : _result(0), _stack() {
	if (DEBUG)
		std::cout << LGREEN << "RPN default constructor called." << RESET << std::endl;
}

RPN::RPN(RPN const & src) : _result(src._result), _stack(src._stack) {
	if (DEBUG)
		std::cout << LGREEN << "RPN copy constructor called." << RESET << std::endl;
}

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------- Destructor
// ----------------------------------------------------------------------------

RPN::~RPN()
{
	if (DEBUG)
		std::cout << LRED << "RPN destructor called." << RESET << std::endl;
}

// ----------------------------------------------------------------------------
// --------------------------------------------------------------------- Getter
// ----------------------------------------------------------------------------

int const& RPN::getResult(void) const {
	return (this->_result);
}

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------- Exceptions
// ----------------------------------------------------------------------------

const char* DivisionByZeroException::what() const throw() {
	return ("cannot divide by zero");
}

const char* NotEnoughNumbersException::what() const throw()  {
	return ("not enough number on stack");
}

const char* TooMuchNumbersException::what() const throw() {
	return ("too much numbers in expression");
}

const char* WrongInputException::what() const throw() {
	return ("rpn takes number <10 nb signs +-*/%");
}

// ----------------------------------------------------------------------------
// ------------------------------------------------------------------- Overload
// ----------------------------------------------------------------------------
RPN& RPN::operator=(RPN const& rhs) {
	if (DEBUG)
		std::cout << LBLUE << "RPN assignment operator called." << RESET << std::endl;

	this->_result = rhs._result;
	this->_stack = rhs._stack;

	return *this;
}

// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Methods
// ----------------------------------------------------------------------------

void RPN::doOperation(char op, int firstNb, int secondNb) {

	int result = 0;

	if (op == '+')
		result = firstNb + secondNb;

	else if (op == '-')
		result = firstNb - secondNb;

	else if (op == '*')
		result = firstNb * secondNb;

	else if (op == '/')
	{
		if (secondNb == 0)
			throw(DivisionByZeroException());
		result = firstNb / secondNb;
	}

	this->_stack.push(result);
}

bool	RPN::isOperator(char c) {

	if (c == '-' || c == '+' || c == '/' || c == '*')
		return (true);

	return (false);
}

void	RPN::readAndCalculate(std::string input) {

	for (int i = 0; i < (int)input.size(); i++) {
		while (input[i] && input[i] == ' ')
			i++;

		if (isdigit(input[i]) != 0) {
			int nb = input[i] - '0';
			this->_stack.push(nb);
		}

		else if (isOperator(input[i]) == true) {
			if (this->_stack.size() < 2)
				throw (NotEnoughNumbersException());

			int secondNb = this->_stack.top();
			this->_stack.pop();

			int firstNb = this->_stack.top();
			this->_stack.pop();

			doOperation(input[i], firstNb, secondNb);
		}
	}

	this->_result = this->_stack.top();
	this->_stack.pop();

	if (this->_stack.size() != 0)
		throw TooMuchNumbersException();
}

void	RPN::parseInput(std::string input) {

	for (int i = 0; i < (int)input.size(); i++) {

		if (isdigit(input[i]) == 0 && isOperator(input[i]) == false && input[i] != ' ')
			throw(WrongInputException());

		if (isdigit(input[i]) != 0 && input[i + 1] && input[i + 1] != ' ')
			throw(WrongInputException());

		if (isOperator(input[i]) && input[i + 1] && input[i + 1] != ' ')
			throw(WrongInputException());
	}
}
