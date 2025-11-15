// 3. Deleting Elements
// Elements can only be deleted from the front of the queue using the pop() function.
// The process of deleting elements from a queue is also called dequeue.
// Time complexity for deletion : O(1)

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);

    // Deleting elements from the front of the queue
    q.pop();

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}