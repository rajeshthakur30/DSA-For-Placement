#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    bool isPrime=true;//start by assuming the number is prime
    for(int i=2;i<n;i++){
        if(n%i==0){//found a divisior
            isPrime=false;//we used instead ou cout
            
            // cout<<"Not a prime number"<<endl;
            break;//stop checking further
    }
    if(isPrime==0){
        cout<<"Not a prime number"<<endl;
    }
    if(isPrime==1){
        cout<<"Prime number"<<endl;
    }
    return 0;
}
}