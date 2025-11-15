#include <iostream>
#include <math.h>
using namespace std;

// Function to count set bits in a number
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += (n & 1); // check last bit
        n >>= 1;          // right shift
    }
    return count;
}

// Main function
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = a & b;  // bitwise AND
    int setBits = countSetBits(result);

    cout << "Number of set bits in (a & b) = " << setBits << endl;

return 0;
}