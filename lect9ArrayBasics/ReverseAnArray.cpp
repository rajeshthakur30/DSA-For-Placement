#include<iostream>
using namespace std;

void reverse(int arr[],int n ){
    int s=0;
    int e=n-1;
    while(s<=e){
    swap(arr[s],arr[e]);
   s++;
   e--;
    }
}
   void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={11,22,33,44,55,66};

    reverse(arr,5);
    reverse(brr,6);

    printArray(arr,5);
    printArray(brr,6);
    return 0;
}