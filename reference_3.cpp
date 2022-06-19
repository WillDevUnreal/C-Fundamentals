#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string greeting = "Hi!";
    string& ref = greeting;

    cout << greeting << "\t" << &ref << endl;

    string name = "Will";
    ref = name;
    cout << name << endl;
    return 0;
}