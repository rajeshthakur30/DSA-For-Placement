#include<iostream>
using namespace std;

    int factorial(int n){
        //base case
        if(n==0){
            return 1;
        }
            // int SmallerProblem=factorial(n-1);
            // int BiggerProblem=n*SmallerProblem;
            // return BiggerProblem;

            // int SmallerProblem=factorial(n-1);
            // return n*SmallerProblem;

            
            return n*factorial(n-1);

    }

    int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<< ans << endl;
    return 0;
}