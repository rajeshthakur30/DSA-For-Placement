// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<vector<int>>tripletSum(int arr[],int n,int s){
//     vector<vector<int>> ans;
//     for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//     for(int k=j+1;k<n;k++){
//     if(arr[i]+arr[j]+arr[k]==s){
//     vector<int> temp;
//     if(arr[i]<arr[j] && arr[i]<arr[k]){
//     temp.push_back(arr[i]);
//     if(arr[j]<arr[k]){
//      temp.push_back(arr[j]);
//     temp.push_back(arr[k]);
// }
//      else{
//      temp.push_back(arr[k]);
//      temp.push_back(arr[j]);
//       }
//     }
//     else if(arr[j]<arr[i] && arr[j]<arr[k]){
//      temp.push_back(arr[j]);
//     if(arr[i]<arr[k]){
//     temp.push_back(arr[i]);
//      temp.push_back(arr[k]);
//      }
//     else{
//     temp.push_back(arr[k]);
//     temp.push_back(arr[i]);
//      }
//     }
//   else{
//     temp.push_back(arr[k]);
//     if(arr[i]<arr[j]){
//      temp.push_back(arr[i]);
//     temp.push_back(arr[j]);
//     }
//     else{
//     temp.push_back(arr[j]);
//     temp.push_back(arr[i]);
//     }
//   }
//     ans.push_back(temp);
//  }
// }
// }
// }
// sort(ans.begin(),ans.end());
//    return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];    
//     cout<<"Enter the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int s;
//     cout<<"Enter the sum: ";
//     cin>>s;
//     vector<vector<int>> result=tripletSum(arr,n,s);
//     cout<<"The triplets are: "<<endl;
//     for(int i=0;i<result.size();i++){
//         for(int j=0;j<result[i].size();j++){
//             cout<<result[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

//second approach
    #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find all unique triplets that sum to 'target'
vector<vector<int>> tripletSum(vector<int>& arr, int target) {
    vector<vector<int>> result;
    int n = arr.size();

    // Sort the array
    sort(arr.begin(), arr.end());

    // Fix the first element one by one and use two pointers for the rest
    for (int i = 0; i < n - 2; i++) {
        // Skip duplicates for the first number
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == target) {
                result.push_back({arr[i], arr[left], arr[right]});

                // Move pointers and skip duplicates
                while (left < right && arr[left] == arr[left + 1]) left++;
                while (left < right && arr[right] == arr[right - 1]) right--;

                left++;
                right--;
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return result;
}

int main() {
    int n, target;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    vector<vector<int>> triplets = tripletSum(arr, target);

    cout << "Triplets with sum " << target << " are:" << endl;
    for (auto triplet : triplets) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
