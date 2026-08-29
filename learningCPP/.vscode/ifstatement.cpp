#include <iostream>

int main(){
    int age;
    std::cout << "enter ur age or turning age: ";
    std::cin >> age;
    if(age >= 21){
        std::cout << "welcome to the club " << '\n';

    }
    else if(age >= 18 && age < 21){
        std::cout << "you are a fresh adult, but not old enough to drink " << '\n';
    }
    else if(age < 0){
        std::cout << "you havent respawned yet lmao" << '\n';
    }
    else{
        std::cout << "go play minecraft!" << std::endl;
    }
    return 0;
}
