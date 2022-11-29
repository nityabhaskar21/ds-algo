#include <iostream>
#include<tuple>
using namespace std;
 
int main() {
    tuple<int, string, bool> fruit(3, "apple", true);
     
    int id;
    string name;
    bool isAvailable;

    // tie() function unpacks the elements of a Tuple to variables.
     
    tie(id, name, isAvailable) = fruit;
     
    cout << "id          : " << id << endl;
    cout << "name        : " << name << endl;
    cout << "isAvailable : " << isAvailable << endl;
}