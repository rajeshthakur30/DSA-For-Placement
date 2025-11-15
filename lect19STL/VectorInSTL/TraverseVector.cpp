// Traverse Vector
// .Traversing a vector means going through each element one by one, usually using a loop.
// .You can use a for loop with an index (v[i]), a range-based for loop (for(int x: v)), or iterators.
//.It takes linear time O(n) .

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Traversing vector using range based for loop
  	for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}

