#include <iostream>
using namespace std;

int main() {
    long long n;
    int k;
    cin >> n >> k;              // input: n k

    int bit = (n >> k) & 1;
    cout << bit;

    return 0;
}
