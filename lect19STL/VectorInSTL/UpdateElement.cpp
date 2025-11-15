// Update elements
//. To update an element, you simply use its index with the assignment operator, for example v[i]=newValue;
// .This replaces the old element at index i with the new value you want.

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {10, 20, 30};
    cout << "Original value at index 1: " << v[1] << endl;

    // Updating the element at index q
    v[1] = 50;

    cout << "Updated value at index 1: " << v[1] << endl;
    return 0;
}