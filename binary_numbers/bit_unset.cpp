#include <bits/stdc++.h>  

using namespace std;

void printBinary(int number) {
for (int i = 10; i >= 0; i--) {
        cout<<( (number>>i) & 1);
    }
    cout<<endl;
}

int main() {

    int a = 10;
    printBinary(a);

    // unset the 3rd bit from right
    printBinary( a & (~(1<<3)));

    return 0;
}