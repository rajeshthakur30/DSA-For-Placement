//1.insert() is used for fast insertion if the position iterator is known; otherwise, traverse the list to reach the position.
// push_front() is used to insert at the beginning and push_back() to insert at the end.
// Time complexity to insert element both at beginning and end : O(1).
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l = {3, 2};

    // Inserting an element at the end
    l.push_back(5);

    // Inserting an element at the beginning
    l.push_front(1);

    // Inserting an element at a specific position
    auto it = l.begin();
    advance(it, 2);
    l.insert(it, 4);

    for (auto i : l)
        cout << i << " ";
    return 0;
}


