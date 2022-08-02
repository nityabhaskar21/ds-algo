#include <bits/stdc++.h>  

using namespace std;

void printBinary(int number) {
for (int i = 10; i >= 0; i--) {
        cout<<( (number>>i) & 1);
    }
    cout<<endl;
}

int main() {

//    for (char c = 'A' ; c <= 'C'; c++) {
//     printBinary(c);
//    }

//    for (char c = 'a' ; c <= 'c'; c++) {
//     printBinary(c);
//    }

   char C1 = 'S';

//    char c1 = C1 | (1<<5); // (1<<5) is ' ' i.e. space
   char c1 = C1 | ' '; 

   cout<<c1<<endl;;

   char c2 = 'd';

//    char C2 = c2 & (~(1<<5)); // (~(1<<5)) is '_' i.e. underscore
  char C2 = c2 & '_'; 

   cout<<C2;

    return 0;
}