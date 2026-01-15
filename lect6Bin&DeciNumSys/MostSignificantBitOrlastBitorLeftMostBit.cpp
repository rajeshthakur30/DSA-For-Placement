#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int bit = 0;
    while (n != 0) {
        bit = n & 1;
        n >>= 1;
    }
    cout << bit;
    return 0;
}

//13 in binary = 1101 → MSB = 1(leftmostbit)
//6 in binary = 110 → MSB = 1
//0 in binary = 0 → MSB = 0

//Note:For a positive number, the MSB is always 1 (except for 0).