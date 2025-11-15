#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"printing done"<<endl;
}
int main(){
    int num[15];
    cout<<"value at index is "<< num[14]<<endl;

    int second[3]={5,7,11};
    cout<<"value at index 2 is "<<second[2]<<endl;

    int third[15]={2,7};
    int n=15;
    printArray(third,15);

    int fourth[10]={0};
    n=10;
    printArray(fourth,10);

int fifth[10]={1};
    n=10;
    printArray(fifth,10);
int fifthSize=sizeof(fifth);
cout<<"size of fifth is "<<fifthSize<<endl;
    cout<<"everything is fine"<<endl;
        return 0;
}