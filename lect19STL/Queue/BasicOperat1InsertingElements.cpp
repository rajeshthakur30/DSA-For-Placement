// 1. Inserting Elements
// New elements can only be inserted at back of the queue using push() function.
// The process of inserting elements in a queue is also called enqueue.
// Time complexity of insertion : O(1).

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    // Pushing elements into the queue
    q.push(3);
    q.push(4);
    q.push(5);

    return 0;
}