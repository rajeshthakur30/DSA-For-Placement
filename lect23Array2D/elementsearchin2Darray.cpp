#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int row,int col){
    for( int row=0;row<3;row++){
  for( int col=0;col<4;col++){
   if(arr[row][col]== target){
    return 1;
   }
}
}
return 0;
}

int main(){
    //creating 2d array
    int arr[3][4];
//taking input->column wise input
for( int row=0;row<3;row++){
        for( int col=0;col<4;col++){
   cin>>arr[row][col];
    }
}

//print
for(int row=0;row<3;row++){
for(int col=0;col<4;col++){
        cout<<arr[row][col]<<" ";
}
cout<<endl;
}
cout<<"enter the element to search"<<endl;
int target;
cin>>target;

if(isPresent(arr,target,3,4)){
    cout<<"Element found"<<endl;
}
else{
    cout<<"Not found"<<endl;
}
return 0;
}
