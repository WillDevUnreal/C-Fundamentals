#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    nums.assign(10,1);

    nums[0] = 7;
    nums[3] = 8;
    nums[5] = 8;
    nums[9] = 7;

    nums.erase(nums.begin());
    cout << nums.size() << endl;
    
    for(auto n : nums){
        cout << n << " ";
    }

    nums.clear();
    cout << nums.size();

    return 0;
}