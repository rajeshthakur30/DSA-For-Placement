#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurrences(int arr[], int n) {
    int maxVal = arr[0],minVal = arr[0];

    // Find max and min value (to handle negatives too)
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }

    int range = maxVal - minVal + 1;
    // int freq[1000] = {0};  // frequency array (assuming range not > 1000)
     vector<int> freq(range, 0);//we also used this instead of int freq[1000] = {0};(it not useed for large range)

    // Count frequencies
    for (int i = 0; i < n; i++) {  
        freq[arr[i] - minVal]++;
    }

    // Check if frequencies are unique
    //int check[1000] = {0}; 
     vector<int> check(n + 1, 0); // max frequency ≤ n (we also used this instead of int check[1000] = {0};(it not useed for large range))

    for (int i = 0; i < range; i++) {
        if (freq[i] > 0) {
            if (check[freq[i]] == 1) {
                return false; // duplicate frequency found
            }
            check[freq[i]] = 1;
        }
    }

    return true;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (uniqueOccurrences(arr, n)) {
        cout << "True (Unique number of occurrences)" << endl;
    } else {
        cout << "False (Not unique)" << endl;
    }

    return 0;
}
 