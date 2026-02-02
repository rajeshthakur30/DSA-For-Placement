#include<iostream>
#include<vector>
using namespace std;
vector<int>moveZeroes(vector<int> &nums){
    // int nonZeroes=0;
    int i=0;
    for(int j=0;j<nums.size();j++){
       if(nums[j]!=0){
           swap(nums[j],nums[i]);
           i++;
        }
    }
      return nums;
}
// Test case
int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
       moveZeroes(nums);
       for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
       }
     return 0;
}


