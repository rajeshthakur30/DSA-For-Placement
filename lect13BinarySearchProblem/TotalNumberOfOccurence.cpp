#include<iostream>
using namespace std;

int FirstOcc(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;  // move left
        } 
        else if (key > arr[mid]) {
            s = mid + 1;
        } 
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int LastOcc(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;  // move right
        } 
        else if (key > arr[mid]) {
            s = mid + 1;
        } 
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int TotalOcc(int arr[], int n, int key) {
    int firstIndex = FirstOcc(arr, n, key);
    int lastIndex = LastOcc(arr, n, key);

    if (firstIndex == -1 || lastIndex == -1)
        return 0; // key not found
    return (lastIndex - firstIndex) + 1;
}

int main() {
    int even[5] = {1, 2, 3, 3, 5};

    cout << "First Occurrence of 3 is at index " << FirstOcc(even, 5, 3) << endl;
    cout << "Last Occurrence of 3 is at index " << LastOcc(even, 5, 3) << endl;
    cout << "Total number of occurrences of 3 is: " << TotalOcc(even, 5, 3) << endl;

    return 0;
}
