#include <iostream>
using namespace std;

//https://www.youtube.com/watch?v=pajxxDmuxmU&t=835s&ab_channel=codeExplainer

long long mod(long long x, int C) {
    return ((x%C)+C)%C;
}

long long mul(long long A, long long B, int C) {
    return mod((mod(A, C)*mod(B, C)), C);
}

long long powHelper(int A, int B, int C) {
    if (B==0) return 1;
    if (B==1) return A%C;
    long long res=1;
    
    while (B) {
        if (B%2==1) {
            res=mul(res, A, C);
        }
        A=mul(A, A, C);
        B/=2;
    }
    return res;
}
int pow(int A, int B, int C) {
    // Just write your code below to complete the function. Required input is available to you as the function arguments.
    // Do not print the result or any output. Just return the result via this function.
    if (A==0) return 0;
    int powResult = powHelper(A, B, C);
    return powResult>=0?powResult:(powResult+C);
}

int main() {


    return 0;
}