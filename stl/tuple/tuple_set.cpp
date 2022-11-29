#include <iostream>
#include<tuple>
using namespace std;
 
int main() {
    tuple<int, string, bool> fruit;
    fruit = make_tuple(12, "apple", true);
    get<1>(fruit) = "banana";
    cout << get<1>(fruit) << endl;
}