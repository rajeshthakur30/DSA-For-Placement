// Theinsert() operation adds a new element to the set only if it not already present.
// If the element already exists, insert() does nothing (since duplicates are not allowed in set).
// Time complexity to insert is O(log n), as the underlying data structure is a Red-Black Tree.
#include <iostream>
#include <set>
using namespace std;

int main() {
    // Initialize set with values
    set<int> s = {2, 3};

    // Inserting an element
    s.insert(1);

    // Traversing the set
    for (auto x : s)
        cout << x << endl;

    return 0;
}