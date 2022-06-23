#include <iostream>
#include <cstdio>
using namespace std;

int incCopy(int value){
    value++;
    return 0;
}

void incRef(int& value){
    value++;
}

int main(){
    int x = 1;
    
    incCopy(x);
    cout << x <<endl;

    incRef(x);
    cout << x <<endl;

    return 0;
}