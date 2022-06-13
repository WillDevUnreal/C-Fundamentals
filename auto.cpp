#include <iostream>
using namespace std;

int main(){
    // type interference
    auto a = 1;
    auto b = 1.2;
    auto c = false;

    cout << typeid(c).name() << endl;
    return 0;
}