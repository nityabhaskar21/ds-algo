#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    // FIFO
    // push()	inserts an element at the back of the queue
    // pop()	removes an element from the front of the queue
    // front()	returns the first element of the queue
    // back()	returns the last element of the queue
    // size()	returns the number of elements in the queue
    // empty()	returns true if the queue is empty

    q.push(8);
    q.push(10);

    cout<<q.front()<<" "<<q.back()<<endl;

    q.pop();

    cout<<q.front()<<endl;

    if (!q.empty()) {
        cout<<"size: "<<q.size()<<endl;
    }

    return 0;
}