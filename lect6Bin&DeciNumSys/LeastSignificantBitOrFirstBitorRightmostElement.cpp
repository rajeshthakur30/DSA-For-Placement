#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int bit = n & 1;
    cout << bit;
    return 0;
}
//If n is even → output 0
//If n is odd → output 1
