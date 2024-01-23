#include "Serialization.hpp"

int main(void)
{
    Data* greetings = new Data;
	greetings->str = "Hello Serialization World!";
    std::cout << "Base ptr : " << LBLUE << greetings->str << RESET << std::endl;
    std::cout << "Base ptr address : " << LBLUE << greetings << RESET << std::endl;

    uintptr_t rawGreeting = Serialization::serialize(greetings);
    std::cout << "uintptr address after Serialization : " << LYELLOW << rawGreeting << RESET << "\n" << std::endl;

    //Fetch original ptr Deserialization
    Data* goodbye = Serialization::deserialize(rawGreeting);
    std::cout << "Deserialized ptr : " << LGREEN << goodbye->str << RESET << std::endl;
    std::cout << "Deserialized ptr address : " << LGREEN << goodbye << RESET << std::endl;
    
    delete greetings;
    return (0);
}
