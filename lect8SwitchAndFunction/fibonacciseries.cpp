#include <iostream>
using namespace std;

// Function to compute the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) return n; // Base cases: F(0) = 0, F(1) = 1

    int a = 0, b = 1, c;
    for (int i = 2; i <=n; ++i) {
        c = a + b; // Calculate the next Fibonacci number
        a = b;     // Update a to the previous Fibonacci number
        b = c;     // Update b to the current Fibonacci number
    }
    return c; // Return the nth Fibonacci number
}

int main() {
    int n;
    cout << "Enter the position (n): ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;

    return 0;
}
