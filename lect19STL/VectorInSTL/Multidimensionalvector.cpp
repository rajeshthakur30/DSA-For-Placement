// Multidimensional Vectors
// Multidimensional vectors are dynamic arrays that can store data in more than one dimension, like tables or grids.
// They are implemented using vector inside another vector, allowing flexible row-column (2D), or even higher-dimensional structures.

// Declaration of a 2D Vector
//>vector<vector<int>> matrix;


//Initialization of 2D Vector
// vector<vector<int>> matrix = {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
// };

// // 3 rows , 4 columns all initialized to 0
// vector<vector<int>>matrix(3,vector<int>(4,0));


//Accessing Elements of 2D Vector
//We can access elements using two indices:
// Outputs 6
//cout << matrix[1][2];


//traversing in 2D Vector
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>>matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout<<"Traversing 2D vector using index-based loop:\n";
    
    // Traversing using index-based for loop
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}