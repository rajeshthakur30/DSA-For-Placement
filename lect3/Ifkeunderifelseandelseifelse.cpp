#include<iostream>
using namespace std;
int main(){
    int n=24;
    if(n>=0){
               if(n%2==0){
                cout<<"positive and even"<<endl;
               }
                else{
                 cout<<"positive and odd"<<endl;
                }
            }
    //to check if n is 0
    else if(n==0){
   cout<<"the number is zero"<<endl;
    }
    //to check if n is negative
    else{
        cout<<"the number is negative"<<endl;
    }
    return 0;          
}