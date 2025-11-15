#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapElements(int arr[], int size){
        int temp = arr[1];
        arr[1] = arr[0];
        arr[0] = temp;
}

int main(){
    // int even[2] = {5, 2};//fixed values

    // swapElements(even, 2);//call function
    // printArray(even, 2);//output print
     int arr[2];
    cout << "Enter two numbers: ";
    cin >> arr[0] >> arr[1];

    swapElements(arr, 2);
    cout << "After swapping: ";
    printArray(arr, 2);

    return 0;
}
