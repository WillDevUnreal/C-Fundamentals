#include <iostream>
using namespace std;

int main(){
    string title = "Mr. ";
    string name("Will");

    cout << name.size() <<endl;
    cout << name.back() <<endl;
    cout << name[0] <<endl;
    name += " Rodrigues";
    cout << title + name <<endl;
    cout << title.append(name) << endl;
    return 0;
}