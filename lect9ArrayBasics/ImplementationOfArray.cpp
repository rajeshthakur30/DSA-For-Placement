#include<iostream>
using namespace std;
int main(){
    int number[15];
    cout<<"value at 14 index" << number[14]<<endl;
    int second[3]={5,7,11};
    cout<<" value at 2 index" << second[2]<<endl;
    int third[15]={2,7};
    int n=15;
    cout<<"printing the array" <<endl;
    for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
    }

        cout<<endl<<"everything is fine"<<endl;
        return 0;
}        
