#include <iostream>
#include <cmath> 
// This program calculates the hypotenuse of a right triangle given the lengths of the other two sides.

int main (){
    double a;
    double b;
    double c;

    std::cout << "enter side A: ";
    std::cin >> a;

    std::cout << "enter side B: ";
    std::cin >> b;

  
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "the hypotenuse is: " << c << std::endl;

    return 0;
}

