#include "User.hpp"

void printUserInfo(User user)
{
    std::cout << user.getFirst() << std::endl;
    std::cout << user.getLast() << std::endl;
    std::cout << user.getAge() << std::endl;
}

int main(void)
{
    User User1("Basil", "Alba", 40);
    User User2 = User(User1);

    printUserInfo(User1);
    printUserInfo(User2);

    // User2.setFirst("Mariam");
    // User2.setLast("Anderson");
    // User2.setAge(36);

    // printUserInfo(User1);
    // printUserInfo(User2);

    return 0;
}
