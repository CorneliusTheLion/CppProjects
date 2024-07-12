#include <iostream>
#include <string>

int main()
{
    std::string userInput;
    std::cout << "Enter your name: ";
    std::cin >> userInput;

    std::cout << "Hello " + userInput;

    
    return 0;
}