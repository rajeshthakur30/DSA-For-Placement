// A queue is a container adapter that stores elements in FIFO (First In, First Out) order.

// The elements that are inserted first should be removed first.
// This is possible by inserting elements at one end (called back) and deleting them from the other end (called front) of the data structure.
// dequeue_operation_in_queue_1
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(5);

    // Accessing the front and back elements
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // Removing an element from the front
    q.pop();

    cout << "Front element after pop: " << q.front() << endl;
    return 0;
}
// Syntax
// Queue is defined as the std::queue class template inside <queue> header file.

// queue<T> q;

// where,

// T: DataType of elements in the queue.
// q: Name assigned to the queue.