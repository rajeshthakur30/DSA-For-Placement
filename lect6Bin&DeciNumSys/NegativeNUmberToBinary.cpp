
// #include<iostream>
// #include <math.h>
// using namespace std;

// int decimalToBinary(int n){
//     int ans = 0;
//     int place = 1;
//      while (n != 0) {
//         int bit = n & 1;
//         ans = ans + bit * place;
//         place *= 10;
//         n >>= 1;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin >> n;

//     if(n<0){
//         // if number is negative
//         n = n*(-1);
//         int ans = decimalToBinary(n);
//     // Find 2's compliment of the number
//     // 1's comp
//     int newAns = (~ans);
//     // 2's comp
//     newAns = newAns+1;
//     cout << newAns << endl;

//     } else {
//         // if number is positive 
//         int ans = decimalToBinary(n);
//         cout << ans << endl;
//     }
// }


// #include <iostream>
// #include <bitset>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     // Prints 32-bit two's complement binary (works for negative numbers too)
//     cout << bitset<32>(n) << endl;

//     return 0;
// }



#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    n*=(-1);
    int i=0,ans=0;
    while(n!=0){
        int bit = n & 1;
        ans = ans + (bit * pow(10,i));
        n = n >> 1;
        i++;
        }
    int newAns = ~ans+1;
    cout << newAns;
}
