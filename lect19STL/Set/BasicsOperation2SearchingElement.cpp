// Searching Elements
// The find() function is used to check whether an element exists. It returns an iterator to the element if found, else returns end() if the element is not found.
// The count() function can also be used to check existence, returns 1 if the element is present, 0 otherwise.
// Time complexity for searching an element is O(log n).

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 2, 3};

    // Accessing elements using find()
    auto it = s.find(1);
    if (it != s.end())
        cout << "Element found: " << *it << endl;

    // Accessing elements using count()
    if (s.count(2))
        cout << "2 exists in the set" << endl;

    // Accessing all elements by traversal
    cout << "All elements: ";
    for (auto x : s)
        cout << x << " ";
    cout << endl;

    return 0;
}