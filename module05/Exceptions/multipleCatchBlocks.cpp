#include <exception>
#include <iostream>

/*
 * Depending on what is thrown in the try block, cpp will know which catch block
 * to run.
 *
 * When using (...), cpp will call the catch block for any type of exception
 * thrown in the try block. It is good practice to place a "take it all" catch
 * block at the end of the catch blocks.
 *
 *
 */

int main() {
  try {
    throw std::runtime_error("runtime_error");
    // throw -1;
  } catch (int e) {
    std::cout << e << std::endl;
  } catch (...) {
    std::cout << "An exception error occured." << std::endl;
  }
  return 0;
}

// int main() {
//   try {
//     throw std::runtime_error("runtime_error");

//   } catch (const char *err) {
//     std::cout << err << std::endl;
//   } catch (int error) {
//     std::cerr << error << std::endl;
//   } catch (std::runtime_error &e) {
//     std::cout << e.what() << std::endl;
//   }
//   return 0;
// }
