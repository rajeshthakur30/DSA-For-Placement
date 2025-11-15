// Traversing
// Loops (like range-based for loop or iterators) can be used to traverse all elements in a set.
// The traversal visits elements in sorted order (by default ascending, or according to a custom comparator).
// Time complexity to traverse a set is O(n), since each of the n elements is visited exactly once.
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 2, 3};

    // Traversing using iterators
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it << endl;  

    return 0;
}