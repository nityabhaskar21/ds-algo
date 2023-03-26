#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  

using namespace std;
 
void selection_sort(int A[ ], int n ) {
    int temp;
    for(int k = 0; k< n-1; k++) {
        
    }
}
 

int main()
{
    int A[] = { 0, 1, 9, 6, 4, 5, 6,};
    selection_sort(A, sizeof(A)/sizeof(A[0]));

    for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++) {
        cout << A[ i ] <<" ";
    }

    return 0;
}