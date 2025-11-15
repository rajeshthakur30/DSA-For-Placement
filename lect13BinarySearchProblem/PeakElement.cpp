#include<iostream>
#include<vector>
using namespace std;

int peakIndexMountainArray(vector<int>&arr){
int s=0;
int e=arr.size()-1;

int mid=s+(e-s)/2;
while(s<=e){
    if(arr[mid]<arr[mid+1]){
    s=mid+1;
}
else{
    e=mid;
}
mid=s+(e-s)/2;
}
return s;
}
int main(){
    int arr[]={3,7 ,9,0,4,2};
    cout<<"The peak element is "<<peakIndexMountainArray<<endl;
}