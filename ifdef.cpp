#define ZERO 0
#define SQUARE(x) x * x
#include <iostream>
using namespace std;

int main(){
    #ifdef SQUARE
        cout << SQUARE(10) << endl;
    #else
        cout << "else ..." << endl;
    #endif
   

    #if DEBUG == 1{
        cout << "end..." < endl;
    }
    #endif

     return ZERO;
}