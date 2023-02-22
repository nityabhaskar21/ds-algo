#include <iostream>
using namespace std;

int main() {
    //We can convert a char-int to int using this.
    char c1 = '8';
    cout<<(c1-'0')*1<<endl; //8

    cout<<(c1-'0')+10<<endl; //18

    return 0;
}