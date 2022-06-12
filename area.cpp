#include <iostream>
using namespace std;

// PI = 3.1415 - PI * radius * radius
int main(){
    const double PI = 3.1415;
    double radius;
    double area;
    cout << "Enter Radius? \n";
    cin >> radius;
    area = PI * radius * radius;
    cout << "Area is: " << area << "\n";
    return 0;
}