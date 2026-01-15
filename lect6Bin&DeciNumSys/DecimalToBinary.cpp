// #include<iostream>
// #include<math.h>
// using namespace std;


// int main() {

//     int n;
//     cin >> n;


//     int ans  = 0;
//     int i = 0;
//     while(n != 0 ) {

//         int bit  = n & 1;

//         ans = (bit * pow(10, i) ) + ans;

//         n = n >> 1;
//         i++;

//     }

//     cout<<" Answer is " << ans << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "Answer is 0\n";
        return 0;
    }

    long long ans = 0;
    long long place = 1;

    while (n != 0) {
        int bit = n & 1;
        ans = ans + bit * place;
        place *= 10;
        n >>= 1;
    }

    cout << "Answer is " << ans << endl;
    return 0;
}
