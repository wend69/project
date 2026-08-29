#include <iostream>
#include <vector>


/*typedef and type alias are used to create new names
 for existing types.
 */


typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef std::string sixseven_t;
typedef int hatemyself_t;
using std::cout;
typedef std::string idk_t;
using std::string;
typedef std::string nameless_t;


int main(){
    nameless_t tryingtoguess = "i dont exactly know what it is but anything suppose";

    idk_t iguess = "something else";
    hatemyself_t age = 20;
    sixseven_t anythingrandom = "i miss her";
    text_t name = "dima"; 
    pairlist_t pairlist;
    cout << text_t("Hello, ") + name + "!" << '\n';
    cout << anythingrandom << '\n';
    cout << age << " YEARS OLD! " << '\n';
    return 0;
}