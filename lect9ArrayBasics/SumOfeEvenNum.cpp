#include<iostream>
using namespace std;
int main(){
    int n,sum=0,i=2;
    cout<<"enter a number: ";
    cin>>n;
    while(i<=n){
        sum+=i;
        i+=2;
    
    cout<<"sum of all even number from 1 to "<< n <<" is : "<<sum<<endl;
    return 0;
}
