#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    double FinalGrade;
    cout << "Enter the final grade: ";
    cin >> FinalGrade;

    if(FinalGrade >= 7){
        cout << "Excelente grade. " << endl;
        cout << "Congratulations! " << endl;
    }

    return 0;
}
