#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if(number % 2 == 0){
        cout << "Even number. " << endl;
    }
    return 0;
}