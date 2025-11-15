#include<iostream>
#include<vector>
using namespace std;

vector<int> intersectionOfTwoArrays(int arr1[], int n, int arr2[], int m) {
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {            
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
        else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
        }
    return ans;
}
int main(){
    int n;
    cout<<"Enter size of first array: ";
cin>>n;
    int arr1[100];
    cout<<"Enter elements of first array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    
   int m;
    cout<<"Enter size of second array: ";
    cin>>m;
    int arr2[100];
    cout<<"Enter elements of second array: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    vector<int> result = intersectionOfTwoArrays(arr1, n, arr2, m);
    cout << "Intersection elements are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}