// A list in C++ is a sequence container that allows you to store elements one after another.

//.Implemented as a doubly linked list and maintains both front and back for fast operations on both the ends.
//. Data is stored in non-contiguous memory, allowing fast insertion and deletion anywhere in the list (beginning, middle, or end).
#include <iostream>
#include <list>
using namespace std;

int main()
{
    // Create a list of integers
    list<int> myList;

    // Add elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(5);

    // Display elements
    cout << "List elements: ";
    for (int n : myList)
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}