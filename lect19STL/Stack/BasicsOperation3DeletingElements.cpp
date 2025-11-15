// 3. Deleting Elements
// In stack, only the top element of the stack can be deleted by using pop() method in one operation.

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    // Deleting top element
    st.pop();
    
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}