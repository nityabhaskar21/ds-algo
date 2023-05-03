#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
int MOD_INT = 1e9+7;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


void merge_array(int *A, int s, int e) {
    int mid=s+(e-s)/2;
    int l1=mid-s+1;
    int l2=e-mid;

    vector<int> first(l1);
    vector<int> second(l2);

    int mainArrayIndex=s;

    for (int i=0; i<l1; i++) {
    first[i]=A[mainArrayIndex++];
    }

    for (int i=0; i<l2; i++) {
    second[i]=A[mainArrayIndex++];
    }

    int index1=0, index2=0;
    mainArrayIndex=s;

    while (index1<l1 && index2<l2) {
        if (first[index1]<second[index2]) {
            A[mainArrayIndex++]=first[index1++];
        } else {
            A[mainArrayIndex++]=second[index2++];
        }
    }

    while (index1<l1) {
        A[mainArrayIndex++]=first[index1++];
    }

    while (index2<l2) {
        A[mainArrayIndex++]=second[index2++];
    }

}

  void merge_sort(int *A, int s, int e) {
    if (s>=e) {
        return;
    }
    int mid=s+(e-s)/2;

    //merge left half
    merge_sort(A, s, mid);

    //merge right half
    merge_sort(A, mid+1, e);

    //Merge two arrays
    merge_array(A, s, e);
}


int main()
{
    fast_cin();

    // #ifndef ONLINE_JUDGE
    //    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    // #endif

    int A[] = { 0, 1, 9, 6, 4, 5, 6,};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"Before Sorting: ";
    for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++) {
        cout << A[ i ] <<" ";
    }

    merge_sort(A, 0, n-1);

    cout<<"\nAfter Sorting: ";
    for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++) {
        cout << A[ i ] <<" ";
    }

    return 0;
}