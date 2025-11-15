// Pseudo Traversal
// Since only the front and back element can be accessed in a queue, we cannot directly traverse it.
// On the other hand, we can create a copy of the queue, access the front element, and then delete it, and continue this process until the copied queue is empty, we can effectively traverse all the elements of the queue.
// Time complexity for traversal : O(n)



#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);

    // Create a copy
    queue<int> temp(q);

    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    return 0;
}