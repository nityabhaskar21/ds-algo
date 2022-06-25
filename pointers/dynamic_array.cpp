#include <iostream>
using namespace std;

int main() {
    // new int[40];   dynamically allocates an array of 40 ints 

    int x = 10;
    int * list1 = new int[x]{0};
    // Here 0 means all elements are initilized by 0.


    // For dynamically created arrays, 
    // you can use either pointer-offset notation, 
    // or treat the pointer as the array name and use the standard bracket notation

    list1[5] = 20;              // bracket notation
    *(list1 + 7) = 15;	        // pointer-offset notation means same as list1[7]
					
    for (int i = 0; i < 10; i++) {
        cout<<list1[i]<<" ";
    }

    delete [] list1;            // deallocates the array

    return 0;
}