#include "Bureaucrat.hpp"
#include <exception>

/*
 * This function illustrates a basic try-catch block. it throws a standard
 * exception if a certain condition (which should be specified in the if
 * statement) is met. If an exception is thrown, it is caught and handled in the
 * catch block.
 */
void test1() {
  try {
    // Do some stuff here
    if () {
      throw std::exception();
    } else {
      // do someting
    }
  } catch (std::exception e) {
    // Handle the error
  }
}

/*
 * Similar to test1(), this function is intended to throw a standard exception
 * kunder a certain condition. However, it's missing the catch block, which
 * means it will not handle the exception if it's thrown. This exception will be
 * handled in test(3).
 */
void test2() {
  try {
    // Do some stuff here
    if () {
      throw std::exception();
    } else {
      // do someting
    }
  }
}

/*
 * This function calls test2(), which can throw an exception. It correctly
 * catches exceptions of type std::exception, handling any errors that propogate
 * from test2(). Since test2() doesn't catch its exceptions, all exceptions
 * thrown from it will be caught by test3().
 */
void test3() {
  try {
    test2();
  } catch (const std::exception &) {
    // Handle error here
  }
}

/* Here, a custom exception class MyException() is defined, ingeriting from
 * std::exception. It overrides the what() method to provide a custom error
 * message. The function attempts to call test3() and catches any exceptions. It
 * has two catch blocks, one for MyException() and for any other std::exception.
 * It's good practice to catch exceptions by const reference to prevent slicing
 * and unnecessary copies.
 *
 */
void test4() {
  class MyException : public std::exception {
  public:
    virtual const char *what() const throw() {
      return "Error message to be printed\n";
    }
  };

  try {
    test3(;)
  } catch (const MyException &e) {
    std::cerr << e.what();
  } catch (const std::exception &e) {
  }
}
