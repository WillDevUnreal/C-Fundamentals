#include <iostream>
using namespace std;

void sayHello(){
    cout << "Hello!" << endl;
}

void sayHelloTo(string name){
     cout << "Hello! " << name << endl;
}

int main(){
    sayHelloTo("Will");
    return 0;
}