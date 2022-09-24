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

vector<vector<int>> v;
//Recursive approach with memoization
// Whether sum s is possible from subset of [.... i] (till i index of arr)22
int subset_sum(int s, int i, vector<int>& arr) {// sum, index, array

    if (i == -1) return (s==0);// This should come before checking v[i][s]!=-1, 
                               //as  -1 index not present in v.

    if (v[i][s] != -1) {
        return v[i][s];
    }
    
    bool ans = 0;

    // include a[i] in subset sum
    if (s-arr[i]>=0) {
        ans |= subset_sum(s-arr[i], i-1, arr);
    }

    // exclude a[i] in subset sum
    ans |= subset_sum(s, i-1, arr);

    return v[i][s]=ans;
}

int main()
{
    fast_cin();

    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    #endif
    int sum = 0, n = 0;
    cin>>sum>>n;
    vector<int> arr(n);

    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    v.resize(n, vector<int>(sum+1, -1));

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < sum+1; j++) {
    //         cout<<v[i][j] <<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<subset_sum(sum, n-1, arr);
    
    return 0;
}