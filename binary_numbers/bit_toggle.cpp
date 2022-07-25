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

    // toggle the 2nd bit from right
    printBinary( a ^ (1<<2));

    return 0;
}