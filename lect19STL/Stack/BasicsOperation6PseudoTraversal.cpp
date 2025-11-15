// As any element other than the top element cannot be accessed in the stack, it cannot be actually traversed. But we can create a copy of it, access the top element and delete the top. By doing this till the copy stack is empty, we can effectively traverse without modifying the original stack.
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

    // Create a copy
    stack<int> temp(st);

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}