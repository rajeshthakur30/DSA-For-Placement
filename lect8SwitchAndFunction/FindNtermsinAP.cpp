#include <iostream>
using namespace std;

// Function prototype: prints first n terms of AP with first term a and difference d
void printAP(int a, int d, int n) {
    for (int i = 0; i < n; i++) {
        int term = a + i * d;
        cout << term;
        if (i != n - 1) cout << ", ";
    }
    cout << endl;
}

int main() {
    int a, d, n;
    cout << "Enter first term (a): ";
    cin >> a;
    cout << "Enter common difference (d): ";
    cin >> d;
    cout << "Enter number of terms (n): ";
    cin >> n;

    cout << "The first " << n << " terms of the AP are: ";
    printAP(a, d, n);

    return 0;
}
