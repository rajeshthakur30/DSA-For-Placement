#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    string bits = "";
    while (n != 0) {
        bits = char('0' + (n & 1)) + bits;
        n >>= 1;
    }
    cout << bits;
    return 0;
}
