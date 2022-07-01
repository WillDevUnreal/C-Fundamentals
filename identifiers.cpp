#include <iostream>
using namespace std;

int add (int x , int y){
    return x + y;
}

int add (int x, int y, int z){
    return x + y + z;
}

int main(){
    cout << add(10, 20) << endl;
    cout << add(10, 20, 30) << endl;
    return 0;
}