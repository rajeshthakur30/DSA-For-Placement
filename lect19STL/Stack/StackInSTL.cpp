// Stack container follows LIFO (Last In First Out) order of insertion and deletion. It means that most recently inserted element is removed first and the first inserted element will be removed last. This is done by inserting and deleting elements at only one end of the stack which is generally called the top of the stack.

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(5);
    
    // Accessing top element
    cout << "Top element: " << st.top() << endl;
    
    // Popping an element
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;
    return 0;
}

// Syntax
// Stack is defined as std::stack class template inside the <stack> header file.

// stack<T> st;

// where,

// T: DataType (int, char etc.) of elements in the stack.
// st: Name assigned to the stack.