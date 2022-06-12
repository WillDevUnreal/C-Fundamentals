#include <iostream>
using namespace std;

int main(){
    bool isAdmin = false;
    cout << isAdmin << endl;

    //char symbol = "#";
   // cout << symbol << endl;

    // datatype modifiers
   
   short int age = 26;
   cout << age << endl; 

   float pi = 3.14;
   const double PI = 3.1415;
   cout << pi << endl;
   cout << PI << endl;

    // signed unsigned long short
    short int n1 = 1;
    long int n2 = 1;
    unsigned int n3 = 1;
    long long int n4 = 1;
    cout << n1 + n2 + n3 + n4 << endl;

    cout << sizeof(short) << " Bytes" << endl; 


    return 0;
}