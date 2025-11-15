#include <iostream>
using namespace std;

void findDuplicates(int arr[], int n) {
    bool found = false;
    cout << "Duplicate elements are: ";

    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] == -1) continue; // already counted

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // mark as visited
            }
        }

        if (count > 1) {
            cout << arr[i] << " ";
            found = true;
        }
    }

    if (!found) cout << "None";
    cout << endl;
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

    findDuplicates(arr, n);
    return 0;
}
