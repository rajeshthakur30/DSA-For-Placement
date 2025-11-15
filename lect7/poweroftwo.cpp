#include<iostream>
#include<cmath>
using namespace std;
bool isPowerOfTwo(int n){
    for(int i=0;i<=30;i++){
        int ans= pow(2,i); 
        if(ans==n)
        {
            return true;
        }
    }
    return false;

}
int main(){
    int n;
     cout<<"enter the value of n"<<endl;
     cin>>n;
    if(isPowerOfTwo(n)){
        cout<<n<<"is power of two"<<endl;
        
    }
    else{
        cout<<n<<"is not power of two"<<endl;
    }
return 0;
}