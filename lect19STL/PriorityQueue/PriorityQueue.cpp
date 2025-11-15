// A Priority Queue adds and removes elements according to priority.

// Internally uses heap data structure.
// Uses a max heap by default, higher its value, higher its priority. But this can be changed to any desired priority scheme by providing a custom comparison.



#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // Create a max-heap priority queue (default)
    priority_queue<int> pq;

    // Insert elements
    pq.push(30);
    pq.push(10);
    pq.push(20);
    pq.push(40);

    cout << "Elements removed from priority queue in order:\n";

    // Remove elements (largest element comes out first)
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
// Syntax
// Priority queue is defined as std::priority_queue inside <queue> header file.

// priority_queue<T, c, comp> pq;

// where,

// T: DataType of the priority queue
// pq: Name assigned to the priority queue.
// c: Underlying container. Uses vector as default.
// comp: It is a binary predicate function that tells priority queue how to compare two elements. It is used to set the custom priority parameter and scheme. It is optional and if not provided, maximum value gets maximum priority.
