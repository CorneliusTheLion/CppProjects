#include <iostream>
#include <string>

using namespace std;


int main()
{
    string userInput;
    cout << "Enter your name: ";
    cin >> userInput;

    cout << "Hello " + userInput;

    
    return 0;
}