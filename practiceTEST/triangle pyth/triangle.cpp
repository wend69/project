#include <iostream>
#include <cmath>

using namespace std;


int main(){
    string choice;
    double a;
    double b;
    double c;

    cout <<"Hallo, this is triangle calculator, you can find the opposite, adjacent or hypotenuse of a triangle. \n";
    cout <<"read carefully to pick the right option >> \n";
    cout << "a is > adjacent, b is > opposite and c is > hypotenuse \n";
    cout<< "please pick a which one you want to find: \n";

    cout<< "1. opposite (opp)" << '\n';
    cout<< "2. adjacent (adj)" << '\n';
    cout<< "3. hypotenuse (hyp)" << '\n';

    cin>> choice;

if (choice=="1"){

    cout << "enter side a:";
    cin >> a;
    cout << "enter side c:";
    cin >> c;

    b = sqrt(pow(c, 2) - pow(a, 2));
    cout << "opp is a " << b;
}
else if (choice=="2"){
    cout << "enter side b: " ;
    cin >> b;
    cout << "enter side c: ";
    cin >> c;

    a = sqrt(pow(c, 2) - pow(b, 2));
    cout << "adj is a " << a;

}
else if (choice=="3"){

    cout << "enter side a: ";
    cin >> a;
    cout << "enter side b: ";
    cin >> b;

    c = sqrt(pow(a, 2)+pow(b, 2));
    cout << "hyp is a  " << c;
}
else{
    cout << "invalid input, please try again";
}
    return 0;
}