// 3. Updating Elements
// List elements can be updated by accessing them with an iterator and using the assignment operator (=) to set a new value.
// Since lists do not support random access, you must use an iterator to reach the element you want to update.\
// Time complexity for updating: O(1) if you have the iterator, otherwise O(n) to reach the element.

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {1, 3, 4, 2, 5};

    // Changing the first element
    l.front() = 11;

    // Move iterator to the second element
    auto it = l.begin();
    advance(it, 2);

    // Update the value using iterator
    *it = 10;

    for (auto i : l)
        cout << i << " ";
    return 0;
}