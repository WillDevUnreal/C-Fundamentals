#include <iostream>
# include <cstdio>
using namespace std;

int main(){
    int month;

    cout << "Enter a month: ";
    cin >> month;

    int numberOfDays;
    switch (month)
    {
    case 2:
        numberOfDays = 28;
        break;
    
    default:
        break;
    } 

    cout << numberOfDays << " days" << endl;

    return 0;
}