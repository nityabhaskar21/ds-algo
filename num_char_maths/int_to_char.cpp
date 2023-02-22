#include <iostream>
using namespace std;

int main() {
    //We can convert a single digit no. to char using this.
    int i1=9;
    char c1 = i1 + '0';
    cout<<c1;   //9 

    cout<<endl;
    int i2=17;
    char c2 = i2 + '0';
    cout<<c2;   //A

    cout<<endl;
    cout<<(int)'0'<<" "<<(int)'9'<<endl;    //48  57
    return 0;
}