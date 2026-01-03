#include<iostream>
using namespace std;

//row wise sum
// void printSum(int arr[][3],int row,int col){
// cout<<"Printing Sum->"<<endl;
// for(int row=0;row<3;row++){
// int sum=0;
// for(int col=0;col<3;col++){
// sum +=arr[row][col];
// }
// cout<< sum<<" ";

// }
// cout<<endl;
// }

//col wise sum
void printColSum(int arr[][3],int row,int col){
cout<<"Printing Sum->"<<endl;
for(int col=0;col<3;col++){
int sum=0;
for(int row=0;row<3;row++){
sum +=arr[row][col];
}
cout<< sum<<" ";

}
cout<<endl;
}

int main(){
  //creating 2d array
int arr[3][3];
cout<<"Enter the element"<<endl;
//taking input->column wise input
for( int row=0;row<3;row++){
for( int col=0;col<3;col++){
   cin>>arr[row][col];
    }
}

cout<<"Printing the array" <<endl;
//print
for(int row=0;row<3;row++){
for(int col=0;col<3;col++){
        cout<<arr[row][col]<<" ";
}
cout<<endl;
}
printColSum(arr,3,3);
return 0;
}

