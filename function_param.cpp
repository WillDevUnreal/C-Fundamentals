#include <iostream>
using namespace std;
using bynaryop = int(*)(int, int);

int exec(bynaryop func, int, int){
    return (*func)(4,7);
}

int add (int a, int b){
    return a + b;
}

int subtract (int a , int b){
    return a - b;
}

int min(int a , int b){
    return a < b ? a : b;
}

int main(){
    cout << exec(add) << endl;
    cout << exec(subtract) << endl;
    return 0;
}