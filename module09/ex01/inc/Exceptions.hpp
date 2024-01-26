#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <iostream>

class DivisionByZeroException : public std::exception 
{
	public:
		virtual const char* what() const throw();
};

class TooMuchNumbersException : public std::exception 
{
	public:
		virtual const char* what() const throw();
};

class NotEnoughNumbersException : public std::exception 
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
