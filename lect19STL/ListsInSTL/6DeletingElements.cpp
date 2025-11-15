// 6. Deleting Elements
// erase() deletes an element from the list using an iterator to its position.
// pop_front() and pop_back() quickly delete the first and last elements of the list.
// Time complexity for deletion : O(1)

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {1, 3, 4, 2, 5};

    // Deleting last element
    l.pop_back();

    // Deleting first element
    l.pop_front();

    // Deleting third element
    auto it = l.begin();
    advance(it, 2);
    l.erase(it);

    for (auto i : l)
        cout << i << " ";
    return 0;
}