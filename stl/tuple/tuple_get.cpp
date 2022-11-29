#include <iostream>
#include<tuple>
using namespace std;
 
int main() {
    tuple<int, string, bool> fruit;
    fruit = make_tuple(12, "apple", true);
    cout << get<1>(fruit) << endl;
    int s1;
    string s2;
    bool s3;
    tie(s1, s2, s3) = fruit;

    cout<<s1<<" "<<s2<<" "<<s3;
}