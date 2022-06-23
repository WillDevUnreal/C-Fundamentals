#include <iostream>
using namespace std;

void sayHello(){
    cout << "Hello!" << endl;
}

string returnHi(){
    return "Hi!\n";
}

void sayHelloTo(string name){
     cout << "Hello! Welcome " << name << endl;
}

string returnHiTo(string name){
    return "Hi! " + name + "! \n";
}

int main(){
   string result = returnHi();
   result.append("!!!!!!\n");
   cout << result;
    sayHelloTo("Will");
   string result2 =  returnHiTo("Teste");
   cout << result2;
    return 0;
}