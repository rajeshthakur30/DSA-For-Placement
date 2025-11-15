#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, ans=0, i=0;
    cin >> n;

    n = -n;  // make positive first
    while(n!=0){
        ans = (n&1)*pow(10,i) + ans;
        n >>= 1; i++;
    }

    int newAns = (~ans) + 1;   // 2's complement
    cout << newAns;
}
