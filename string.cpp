#include <iostream>
using namespace std;

int main(){
    string abc = "abcdefghijklmnopqrstuvwxyz";

    cout << abc[9] << endl;
    
    for(char l: abc){
        cout << l << ",";
    }

    return 0;
}