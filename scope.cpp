#include <iostream>
#include <cstdio>
using namespace std;

int g = 1;

void func3(){
    cout << "exec ... #03" << endl;
}

void func2(){
    func3();
    cout << "exec... #02" << endl;
} 

void func1(){
    g += 2;
    func2();
    cout << "exec... #01" << endl;
}


int main(){
    
    func1();
    cout << g << endl;
    return 0;
}

//stack!

//func3()
//func2()
//func1()
//main()
