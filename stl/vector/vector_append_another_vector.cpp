//C++ STL program to append a vector to a vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //vector declaration
    vector<int> v1{ 10, 20, 30, 40, 50 };
    vector<int> v2{ 100, 200, 300, 400 };

    //printing elements
    cout << "before appending..." << endl;
    cout << "size of v1: " << v1.size() << endl;
    cout << "v1: ";
    for (int x : v1)
        cout << x << " ";
    cout << endl;

    cout << "size of v2: " << v2.size() << endl;
    cout << "v2: ";
    for (int x : v2)
        cout << x << " ";
    cout << endl;

    //appending elements of vector v2 to vector v1
    v1.insert(v1.end(), v2.begin(), v2.end());

    cout << "after appending..." << endl;
    cout << "size of v1: " << v1.size() << endl;
    cout << "v1: ";
    for (int x : v1)
        cout << x << " ";
    cout << endl;

    cout << "size of v2: " << v2.size() << endl;
    cout << "v2: ";
    for (int x : v2)
        cout << x << " ";
    cout << endl;

    return 0;
}
