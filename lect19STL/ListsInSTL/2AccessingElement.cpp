// 2. Accessing Elements
// Lists do not allow random access, so to get an element at a specific position, you need to go through the list one by one from the start or end.
// The first and last elements can be accessed quickly using front() and back() methods.
// Time complexity for accessing elements : O(n)

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {1, 3, 4, 2, 5};

    // Accessing first and last elements
    cout << l.front() << endl;
    cout << l.back() << endl;

    // Access third element
    cout << *next(l.begin(), 2);

    return 0;
}