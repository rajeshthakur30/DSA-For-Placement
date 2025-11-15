#include<iostream>
#include<vector>
using namespace std;
vector<int>wavePrint(vector<vector<int>>arr,int nRows,int mCols){
    vector<int>ans;
for(int col=0;col<mCols;col++){
    if(col&1){
        for(int rows=nRows-1;rows>=0;rows--){
            ans.push_back(arr[rows][col]);
        }
    }
else{
    for(int rows=0;rows<nRows;rows++){
        ans.push_back(arr[rows][col]);
}
}
}
return ans;
}
int main() {
    int nRows = 3, mCols = 3;  // Example size
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = wavePrint(arr, nRows, mCols);

    cout << "Wave print output: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}