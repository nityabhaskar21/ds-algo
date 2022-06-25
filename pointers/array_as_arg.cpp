#include<iostream>

using namespace std;

int sumUsingArrayArg(int A[]) {  //Here we pass the array as reference only. We dont know the size at ths point
    // Similar to int * A
    // So for using this way we have also to provide the size of array as arg.
    int i, sum = 0;

    int size = sizeof(A)/sizeof(A[0]);
    // Here 'sizeof' on array function parameter 'A' will return size of 'int*' and not of array.

    cout<<"Size of array when passed as fun arg in sumUsingArrayArgWithoutSize: "<<size<<endl;
    for (i=0; i<size; i++) {
        sum += A[i];
    }
    return sum;
}

int sumUsingArrayArgWithSize(int A[], int size) {  

    int i, sum = 0;

    cout<<"Size of array when passed as fun arg in sumUsingArrayArgWithSize: "<<size<<endl;
    for (i=0; i<size; i++) {
        sum += A[i];
    }
    return sum;
}

int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int totalByArrayArgWithoutSize = sumUsingArrayArg(A);
    cout<<"Sum of array when passed as fun arg: "<<totalByArrayArgWithoutSize<<endl;

    int totalByArrayArgWithSize = sumUsingArrayArgWithSize(A, sizeof(A)/ sizeof(A[0]));
    cout<<"Sum of array when passed as fun arg: "<<totalByArrayArgWithSize<<endl;
}