#include <iostream>
#include<tuple>
using namespace std;
 
int main() {
    tuple<int, string, bool> fruit;
    fruit = make_tuple(12, "apple", true);
    cout << "Tuple Size : " << tuple_size<decltype(fruit)>::value << endl;
}