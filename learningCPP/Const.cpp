#include <iostream>
/*const is a keyword that is used to declare
 a constant variable
*/

int main(){
    const double pi = 3.14159;
    double radius = 5.0;
    double circumference = 2 * pi * radius;
    const int width = 1920;
    const int height = 1080;
    std::cout << "resolution is "
              << width << " x " << height << '\n';

    std::cout << circumference << "cm" << '\n';
    return 0;
}
