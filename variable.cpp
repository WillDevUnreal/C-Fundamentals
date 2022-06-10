#include <iostream>
#include <cstdio>

int main(){
    // type indentifier = value; 
    double price = 99.80;
    double tax = 0.08;

    // type indentifier = expression;
    double finalPrice = price * (1 + tax);
    printf("Final Price is: %.2f", finalPrice);
    return 0;
}