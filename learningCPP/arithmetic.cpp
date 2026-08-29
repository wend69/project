#include <iostream>


//arithmetic operators are used to perform mathematical operations on numeric values.

int main (){
    int a = 10;
    int b = 5;
    b++;
    a++;
    

    a+=4;
    a = a + 5;
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << a * b << '\n';
    std::cout << a / b << '\n';
    std::cout << a % b << " remainder "<< '\n';
    return 0;
}

