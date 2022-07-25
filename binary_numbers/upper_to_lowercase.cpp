#include <bits/stdc++.h>  

using namespace std;

void printBinary(int number) {
for (int i = 10; i >= 0; i--) {
        cout<<( (number>>i) & 1);
    }
    cout<<endl;
}

int main() {

   for (char c = 'A' ; c <= 'C'; c++) {
    printBinary(c);
   }

   for (char c = 'a' ; c <= 'c'; c++) {
    printBinary(c);
   }

   char C = 'S';

   char c = C | (1<<5);

   cout<<c;

    return 0;
}