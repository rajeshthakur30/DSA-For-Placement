#include <iostream>
using namespace std;

// Function to calculate Hamming Weight (number of 1 bits)
int hammingWeight(uint32_t n) {
    int count = 0;
    while (n != 0) {
        if (n & 1) {       // check last bit
            count++;
        }
        n = n >> 1;        // right shift by 1
    }
    return count;
}

int main() {
    uint32_t num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Hamming weight (number of 1 bits): " << hammingWeight(num) << endl;

    return 0;
}
