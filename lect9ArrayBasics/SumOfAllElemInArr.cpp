#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; // Declare array of size n
    cout << "Enter " << n << " elements: " << endl;

    // Taking input from user
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculating sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Printing the sum
    cout << "Sum of all elements = " << sum << endl;

return 0;
}
