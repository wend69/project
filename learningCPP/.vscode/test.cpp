#include <iostream>

int main(){
    using std::cout;
    int n = 0, ni = 1;
    while (ni <= 10) {
        n+= ni ;
        ni++;
    }
    cout << "The sum is the " << n << '\n';


    return 0;
}
