#include <iostream>
#include<tuple>
using namespace std;
 
int main() {
    tuple<int, string, bool> fruit1(3, "apple", true);
    tuple<int, string, bool> fruit2(7, "banana", true);
    swap(fruit1, fruit2);
     
    cout << "fruit1 : " << get<0>(fruit1) << " "
    << get<1>(fruit1) << " " << get<2>(fruit1) << endl;
     
    cout << "fruit2 : " << get<0>(fruit2) << " "
    << get<1>(fruit2) << " " << get<2>(fruit2) << endl;
}