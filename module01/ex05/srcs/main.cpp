#include "Harl.hpp"

int main(void)
{
    Harl newComplain;

    newComplain.complain("");
    newComplain.complain("DEBUG");
    newComplain.complain("INFO");
    newComplain.complain("WARNING");
    newComplain.complain("ERROR");

    // newComplain.complain("basil");
    return 0;
}
