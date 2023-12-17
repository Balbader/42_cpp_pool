#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain {
public:
  Brain();
  ~Brain();

  Brain(const Brain &);
  Brain &operator=(const Brain &);

  std::string getIdea(int) const;

protected:
  std::string ideas[100];

private:
};

#endif // !BRAIN_HPP
