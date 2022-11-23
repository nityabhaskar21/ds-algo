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

vector<int> nsl(vector<int>& heights) {
    vector<int> v;
    int n = heights.size();
    stack<pair<int, int>> stk;

    for (int i = 0; i < n; i++) {
        if (stk.empty()) {
            v.push_back(-1);
        } else if (stk.top().first<heights[i]) {
            v.push_back(stk.top().second);
        } else {
            while (!stk.empty() && stk.top().first>=heights[i]) {
                stk.pop();
            }
            if (stk.empty()) {
                v.push_back(-1);
            } else {
                v.push_back(stk.top().second);
            }
        }
        stk.push({heights[i], i});
    }

    return v;
}

vector<int> nsr(vector<int>& heights) {
    vector<int> v;
    int n = heights.size();
    stack<pair<int, int>> stk;
        for (int i = n-1; i >= 0; i--) {
        if (stk.empty()) {
            v.push_back(n);
        } else if (stk.top().first<heights[i]) {
            v.push_back(stk.top().second);
        } else {
            while (!stk.empty() && stk.top().first>=heights[i]) {
                stk.pop();
            }
            if (stk.empty()) {
                v.push_back(n);
            } else {
                v.push_back(stk.top().second);
            }
        }
        stk.push({heights[i], i});
    }
    reverse(v.begin(), v.end());
    return v;
}

int largestRectangleArea(vector<int>& heights) {
    vector<int> nslV = nsl(heights);
    vector<int> nsrV = nsr(heights);

    // for (int i = 0; i < heights.size(); i++) {
    //     cout<<heights[i]<<", nsl: "<<nslV[i]<<", nsr: "<<nsrV[i]<<endl;
    // }
    // cout<<endl;
    int area = 0;

    for (int i = 0; i < heights.size(); i++) {
        area = max(area, (nsrV[i]-nslV[i]-1) * heights[i]);
    }
    return area;
}

int main()
{
    fast_cin();

    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    #endif

    int n = 0;
    cin >> n;
    vector<int> input(n);

    for (int i = 0; i < n; i++){
        cin >> input[i];
    }

    cout<<"largestRectangleArea: "<<largestRectangleArea(input);

    return 0;
}