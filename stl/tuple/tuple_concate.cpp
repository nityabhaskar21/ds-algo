#include <iostream>
#include<tuple>
using namespace std;
 
int main() {
    tuple<int, string, bool> fruit1(3, "apple", true);
    tuple<int, string, bool> fruit2(7, "banana", true);
    auto fruits = tuple_cat(fruit1, fruit2);

    // tuple_cat() function takes two Tuples, concatenate them, 
    // and returns a new tuple with the elements from the two tuples.
     
    cout << "fruits : "
        << get<0>(fruits) << " "
        << get<1>(fruits) << " "
        << get<2>(fruits) << " "
        << get<3>(fruits) << " "
        << get<4>(fruits) << " "
        << get<5>(fruits) << endl;
}