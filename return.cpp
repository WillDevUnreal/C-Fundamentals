#include <iostream>
#include <cstdio>
using namespace std;

void log(string text){
    if(text.empty()){
        return;
    }else{
        cout << "Text: " << text << endl;
    }
    
}

int main(){
    log("");
    log("ok");
    return 0;
}