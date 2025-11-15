#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> pairSum(int arr[],int n,int s){
   
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==s){
                vector<int> temp;
                if(arr[i]<arr[j]){
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                }
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
   return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];    
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    cout<<"Enter the sum: ";
    cin>>s;
    vector<vector<int>> result=pairSum(arr,n,s);
    cout<<"The pairs are: "<<endl;
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}