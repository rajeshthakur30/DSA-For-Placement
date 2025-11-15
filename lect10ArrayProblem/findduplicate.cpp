#include<iostream>
using namespace std;

int findDuplicate(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];//xor for all array element
        }
        for(int i=1;i<n;i++){
            ans=ans^i;//xor for 1 to n-1 element in array
        }
        return ans;
    }
    int main(){
        int arr[6]={5,1,2,3,4,2};
        cout<<"Duplicate is "<<findDuplicate(arr,6)<<endl;
    }