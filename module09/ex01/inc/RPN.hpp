#ifndef RPN_HPP
#define RPN_HPP

#include "colors.hpp"
#include "Exceptions.hpp"

#include <iostream>
# include <string>
# include <stack>

#define SUCCESS 0
#define ERROR 1

#define DEBUG 1

class RPN
{
	private:
		int	_result;
		std::stack<int> _stack;

	public:
		RPN();
		RPN(RPN const & src);
		~RPN();

		RPN & operator=(RPN const & rhs);

		int const &getResult(void) const;

		void doOperation(char op, int firstNB, int secondNb);
		bool isOperator(char c);
		void parseInput(std::string input);
		void readAndCalculate(std::string input);

};

#endif // !RPN_HPP
