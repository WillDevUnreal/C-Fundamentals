#include <iostream>
using namespace std;


int max(int n1, int n2){
    return n1 >= n2 ? n1 : n2;
}

int main(){
    
    int a, b, c;
    
    cout << "Enter the first Number: ";
    cin >> a;

    cout << "Enter the second Number: ";
    cin >> b;

    cout << "Enter the third Number: ";
    cin >> c;

    cout << "Max: " << max(a, max(b,c));
    
    return 0;
}