// 5. Size of stack
// The size() function in a stack returns the number of elements currently in the stack. It helps to determine how many items are stored without modifying the stack.
#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> st;
    st.push(10);
    st.push(5);
    cout << "Size of stack: " << st.size() << endl;
    st.pop();
    cout << "Size of stack:" << st.size() << endl;
    return 0;
}
