//2. Accessing Elements
// Only the front and back elements of the queue can be accessed by using front() and back() functions respectively.
// Time complexity for accessing elements : O(1)


#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);

    // Accessing the front and back elements
    cout << q.front() << endl;
    cout << q.back();
    
    return 0;
}