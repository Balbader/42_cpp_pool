#include "Harl.hpp"

int main(void)
{
    Harl newComplain;

    newComplain.complain("");
    newComplain.complain("debug");
    newComplain.complain("info");
    newComplain.complain("warning");
    newComplain.complain("error");
    return 0;
}
