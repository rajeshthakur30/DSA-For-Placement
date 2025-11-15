#include<iostream>
using namespace std;
#include<climits>
    int reverse(int x){
        int ans=0;
        while(x!=0){
            int digit=x%10;
            ans=(ans*10)+digit;
            x=x/10;
        }
        return ans;
    }
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    cout<<"the reverse number is"<<reverse(n)<<endl;
    return 0;
}