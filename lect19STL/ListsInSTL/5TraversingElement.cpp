// 5. Traversing
// A list can be traversed using begin() and end() iterators in a loop.
// Start from begin() and keep moving the iterator until it reaches end(), accessing each element along the way.
// Time complexity for traversal : O(n).

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {1, 3, 4, 2, 5};

    // Traversing using iterators
    for (auto it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
        
    return 0;
}