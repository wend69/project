#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "enter side A: ";
    std::cin >> a;

    std::cout << "enter side c: ";
    std::cin >> c;

    b = sqrt(pow(c, 2) - pow(a, 2));
    std::cout << "opposite which is (opp) happens to be: " << b << '\n';
    
    return 0;
}