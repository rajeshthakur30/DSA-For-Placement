// Deleting Elements
// To delete an element from a set, use erase(), it removes the element if it exists, else does nothing.
// Time complexity to delete an element is O(log n), since the set is implemented using a Red-Black Tree.



#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 2, 3, 4};

    // Deleting by value
    s.erase(2);

    // Deleting by iterator
    s.erase(s.begin());

    // Traversing the set
    for (auto i : s)
        cout << i << " ";
    cout << endl;

    return 0;
}