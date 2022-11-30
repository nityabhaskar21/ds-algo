// prev example
#include <iostream>     // std::cout
#include <iterator>     // std::next, std::prev
#include <list>         // std::list
#include <algorithm>    // std::for_each
#include <vector>

using namespace std;

int main () {
    std::list<int> mylist;
    for (int i=0; i<10; i++) mylist.push_back (i*10);

    std::cout << "The last element is " << *std::prev(mylist.end()) << '\n';


    vector<int> myVect = { 100, 200, 300, 400, 500 }; 

    // declare iterators for the vector
    vector<int>::iterator i1 = myVect.begin(); 

    vector<int>::iterator i2 = myVect.end(); 

    // store the pointer returned by next()
    // after incrementing i1 by 3
    auto nextptr = next(i1, 3); 

    // store the pointer returned by prev()
    // after decrementing i2 by 3
    auto prevptr = prev(i2, 3); 

    // Displaying iterator position 
    // print the value of the new iterator returned by next()
    cout << "The new pointer after using next() now points to : "; 

    cout << "\n";

    cout << *nextptr << " "; 

    cout << "\n\n"; 

    // Displaying iterator position 
    // print the value of the new iterator returned by prev()
    cout << "The new pointer after using prev() now points to : "; 

    cout << "\n";

    cout << *prevptr << " "; 

    return 0;
}