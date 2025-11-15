#include<iostream>
using namespace std;
 
void merge(int arr[],int s,int e){

    int mid=(s+e)/2;

int len1=mid-s+1;
int len2=e-mid;

int *first = new int(len1);
int *second = new int(len2);

//copy value 
int k=s;
for(int i=0;i<len1;i++){
    first[i]=arr[k++];
}

int k = mid+1;
for(int i=0;i<len2;i++){
    second[i]=arr[k++];
}
}



void mergeSort(int *arr,int s, int e){
  //base case  
  if(s>e){
    return;
  }

  int mid=(s+e)/2;
   
  //left part sort krnha h
  mergeSort(arr,s,mid);

  //right part sort krnha h
  mergeSort(arr, mid+1, e);

  //merge
  merge(arr,s,e);

}

int main(){
    int arr[5]={2,5,1,6,9};
    int n=5;
    mergeSort(arr, 0, n-1);
    return 0;
}
