#include<iostream>
using namespace std;
void bubbleSort( int arr[],int n){
for(int i=1; i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
   int arr[6]={10,1,7,6,14,9};
   bubbleSort(arr,6); //fucttion calling
   for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
   }

  return 0;
}