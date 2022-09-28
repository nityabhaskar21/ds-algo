#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    // LIFO
    // push()	adds an element into the stack
    // pop()	removes an element from top the stack
    // top()	returns the element at the top of the stack
    // size()	returns the number of elements in the stack
    // empty()	returns true if the stack is empty

    st.push(8);
    st.push(4);

    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;

    if (!st.empty()) {
        cout<<"size: "<<st.size()<<endl;
    }

    return 0;
}