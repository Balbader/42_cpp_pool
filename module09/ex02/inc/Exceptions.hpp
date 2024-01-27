#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

# include <iostream>
# include <exception>

class ErrorTimeException : public std::exception 
{
	public:
		virtual const char* what() const throw();
};

class WrongInputException : public std::exception 
{
	public:
		virtual const char* what() const throw();
};

#endif // !EXCEPTIONS_HPP
