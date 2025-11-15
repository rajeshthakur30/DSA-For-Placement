#include<iostream>
using namespace std;

int findUnique(int *arr,int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[6]={2,3,3,5,5,6};
    cout<<"unique element is "<<findUnique<<endl;
}