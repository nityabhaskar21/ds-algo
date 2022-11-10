// CPP program to demonstrate
// how to remove duplicate in-place from vector

// vector:: assign() is an STL in C++ which assigns new values to the vector elements by replacing old ones. 
// It can also modify the size of the vector if necessary.

// The syntax for assigning constant values: 
// vector_name.assign(int size, int value)

// Parameters: 
// size - number of values to be assigned
// value - value to be assigned to the vector_name
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> v;
    v.assign(3, 100);
    v.push_back(90);
 
    cout << "Elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";


    //Remove duplicates
    set<int> s(v.begin(), v.end());
    v.assign(s.begin(), s.end());

    cout << "\nAfter duplicates removal elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}