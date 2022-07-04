#include <iostream>
using namespace std;

int main(){
    string names[] {"Hanna","Peter", "Mary", "Mike", "James"};

    for (int  i = 0; i < 5; i++){
        cout << names[i] << " " ;
    }

    cout << "\nforeach #01 (copy)....\n"; 
    
    for(string s: names){
        s.append("!!!!!"); //copy
        cout << s << " ";
    }

    cout << "\nforeach #02 (ref)....\n"; 
    
    for(auto &s: names){
        s.append("!!!!!"); // ref
        cout << s << " ";
    }

    cout << endl;
    cout << names[0] << endl;
    
    return 0;
}