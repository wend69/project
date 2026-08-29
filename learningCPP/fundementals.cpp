#include <iostream>



int main(){
    std::cout << "Hello, World!" << std::endl;
    std::cout << "I want to master C++" << '\n';
   //both endl and \n are similar but 
/* endl-
    - flushes the output buffer, which can be useful in certain situations
     where you want to ensure that all output is immediately displayed.
    - can be slightly slower than \n because of the flushing operation.

*/
    int x;
    x = 67;
    int y = 60;
//obviously, int is a number that stores whole number value.
    int sum = x + y;
//double is a number type that can store decimal values.
    double something = 3.14; 

//numbers
    double sum1 = something * x + y;
//char is a data that store single character value.
    char negative = 'B';
  
//boolean is a bool that stores true or false value.
    bool isTrue = true;
//string is data that stores a sequence of characters.
    std::string statement = "I am a C++ programmer";
    std::string name = "Dima";
    std::string laptop = "thinkPad";
    std::cout << "I am " << name
              << " and I use " << laptop
              << " also " << statement << '\n';

    

    std::cout << isTrue << '\n';
    std::cout << negative << '\n';
    std::cout << sum1 << '\n';  
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    return 0; 
} 