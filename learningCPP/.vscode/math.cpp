#include <iostream>
#include <cmath> //this is a header file that contains mathematical functions such as pow, sqrt, sin, cos, etc.

int main (){
    double x = 3.14;
    double y = 4;
    double c = 2;
    double a = 12.123123513;
    double z;
    double g;




    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(3, 3);
    z = sqrt(16);
    z = abs(-5); 
    z = round(a);
    z = ceil(a); 
    z = floor(a);
    z = round (3.14); 
    g = floor(3.7);
    std::cout << g;
    return 0; 
}