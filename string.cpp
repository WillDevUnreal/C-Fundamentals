#include <iostream>
using namespace std;

int main(){
    string title = "Mr. ";
    string name("Will");

    cout << name.size() <<endl;
    cout << name.back() <<endl;
    cout << name[0] <<endl;
    cout << title + name <<endl;
    return 0;
}