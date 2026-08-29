#include <iostream>
#include <cmath>

int main(){
    using namespace std;
    double a;
    double b;
    double c;
    
    cout << "enter side b: ";
    cin >> b;

    cout << "enter side c: ";
    cin >> c;

    a = sqrt(pow(c, 2) - pow(b, 2));
    cout << "adjacent which is (adj) happens to be: " << a << '\n';
    

    return 0;
}