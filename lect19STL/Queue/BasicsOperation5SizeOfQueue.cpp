// 5.Size of queue
// The size() function in a queue returns the number of elements currently in the queue.
// It helps to determine how many items are stored without modifying the queue.
#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;
    q.push(10);
    q.push(5);
    cout << "Size of queue: " << q.size() << endl;
    q.pop();
    cout << "Size of queue: " << q.size() << endl;
    return 0;
}