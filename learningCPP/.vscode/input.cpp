#include <iostream>

int main(){
    std::string name;
    std::cout << "enter ur name or something: ";
    //std::cin >> name;
    std::getline(std::cin, name); //this is used to get the full name of the user, including spaces, instead of just the first word. std::cin >> name; would only read the first word of the input, while std::getline(std::cin, name); reads the entire line of input until a newline character is encountered.
    std::cout << "hello " << name << std::endl;

    int age;
    std::cout << "whats ur age or turning age: ";
    std::cin >> age;
    std::cout << "ur age is " << age << std::endl;
    return 0;    
}