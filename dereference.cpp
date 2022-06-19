#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    double pi = 3.14;
    double& piRef = pi;

    cout << &piRef << endl;

    // * -> dereference operator
    // Think of as "Get Value At..."
     cout << *&piRef << endl;

    // * is used to create a pointer!
    return 0;
}