#include "Serialization.hpp"

int main(void)
{
    Data* greetings = new Data;
	greetings->str = "Hello Serialization World!";
    std::cout << "Base ptr : " << greetings->str << std::endl;
    std::cout << "Base ptr address : " << greetings << "\n" << std::endl;

    uintptr_t rawGreeting = Serialization::serialize(greetings);
    std::cout << "uintptr address after Serialization : " << rawGreeting << "\n" << std::endl;

    //Fetch original ptr Deserialization
    Data* goodbye = Serialization::deserialize(rawGreeting);
    std::cout << "Deserialized ptr : " << goodbye->str << std::endl;
    std::cout << "Deserialized ptr address : " << goodbye << std::endl;
    
    delete greetings;
    return (0);
}
