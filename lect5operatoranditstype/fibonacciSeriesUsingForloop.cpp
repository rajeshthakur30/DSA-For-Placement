#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the mumber of terms in fibonacci series:"<<endl;
    cin>>n;
    //here we write the first and seconnd number of the series
    int a=0,b=1;
    for(int i=1;i<n;i++){
        //here we print the next number which is the sum of previous two numbers
        int nextNumber=a+b;
        cout<<nextNumber<<endl;
        //updating the values of a and b
        a=b;
      b=nextNumber;
}
return 0;
}