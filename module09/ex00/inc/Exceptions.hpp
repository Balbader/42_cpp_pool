#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

# include <cstdlib>
# include <cstring>
# include <fstream>
# include <iostream>
# include <list>
# include <map>
# include <string>
# include <sstream>
# include <vector>
# include <utility>

#include <cstdlib>

class ErrorException : public std::exception 
{
	public:
		virtual const char* what() const throw();
};

class FileOpeningException : public std::exception 
{
	public:
		virtual const char* what() const throw();
};
		
class ParseFailException : public std::exception 
{
	public:
		virtual const char* what() const throw();
};

class WrongDateFormatException : public std::exception 
{
	public:
		virtual const char* what() const throw();
};

class WrongFormatException : public std::exception 
{
	public:
		virtual const char* what() const throw();
};

class WrongValueFormatException : public std::exception 
{
	public:
		virtual const char* what() const throw();
};

#endif // !EXCEPTIONS_HPP
