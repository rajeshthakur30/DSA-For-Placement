// 2. Accessing Elements
// Only the top element of the stack can be accessed using top() method.
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // Accessing the top element
    cout << st.top();
    return 0;
}
// Note: Peek() is used to only view the topmost element of the stack not print it.