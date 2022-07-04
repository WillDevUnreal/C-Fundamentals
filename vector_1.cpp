#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {1,2,3};

    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    for(int n: nums){
        cout << n << " ";
    }
    
    for(auto i = nums.rbegin(); i != nums.rend(); i++){
        *i += 100;
        cout << *i << endl;
    }
    
    return 0;
}