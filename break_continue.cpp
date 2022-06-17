#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++)
    {
        if(i % 2 == 1){
            continue;
            //break;
        }
        cout << i << endl;
    }

    cout << "end" << endl;
    
    return 0;
}