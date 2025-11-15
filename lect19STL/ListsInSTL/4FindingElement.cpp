// 4. Finding Elements
// To find an element in a list, you can use the find() function from the <algorithm> library.
// find() returns an iterator to the element if it is found, or the end iterator if it is not found.
// Time complexity for searching elements : O(n).

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l = {1, 3, 4, 2, 5};

    // Finding 4
    auto it = find(l.begin(), l.end(), 4);

    if (it != l.end())
        cout << *it;
    else
        cout << "Element Not Found!";
    return 0;
}