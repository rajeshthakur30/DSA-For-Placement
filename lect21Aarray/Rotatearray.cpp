#include<iostream>
#include<vector>
using namespace std;
vector<int>rotate(vector<int> &nums,int k){
    //int n = nums.size();
   vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++) {
        temp[(i + k) % nums.size()] = nums[i];
    }

    nums = temp;  // Copy temp back to nums
}
int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k=6;
       rotate(nums,k);
       for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
       }
     return 0;
}




