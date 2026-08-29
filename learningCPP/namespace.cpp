#include <iostream>

//namespace is a declarative region
/*that provides a scope to the identifiers
 (the names of types, functions, variables, etc)
  inside it. Namespaces are used to organize code
   into logical groups and to prevent name collisions
    that can occur especially when your code base
     includes multiple libraries.
*/

namespace first{
    int x = 15;
}

namespace second{
    int x = 20;
}

namespace third{
    int x = 30;
    double y = 76.67;
}

int main(){
    using std::cout;
    int x = 10;
    double y = 3.14;
    cout << x << ", "
    << first::x << ", "
    << second::x << ", "
    << third::x << '\n';
    cout << third::y << ", " << y << '\n';

    return 0;
}