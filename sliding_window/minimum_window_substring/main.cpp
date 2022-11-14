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

//WORKING
string minWindow(string s, string t) {
        unordered_map<char, int> mp;

        for (int i = 0; i < t.length(); i++) {
            mp[t[i]]++;
        }

        int count = mp.size();

        int i = 0, j = 0;
        int startSub = 0, lenSub = 0;

        int resultLen = 0;
        int resultStart = 0;
        string sub = "";

        while (j<s.length()) {
            if (mp.find(s[j]) != mp.end()) {
                mp[s[j]]--;
                if (mp[s[j]] == 0) {
                    count --;
                }
                if (count == 0 ) {
                    while (count == 0 && i<=j) {
                        startSub = i;
                        lenSub = j-i+1;
                        if (lenSub<resultLen || resultLen==0) {
                            resultLen = lenSub; 
                            resultStart = startSub;
                        }
                        if (mp.find(s[i]) != mp.end()) {
                            mp[s[i]]++;
                            if (mp[s[i]] == 1) {
                                count++;
                            }
                        }
                        i++;
                    }
                }
            }
            j++;
        }

        return s.substr(resultStart, resultLen);
    }

int main()
{
    fast_cin();

    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    #endif

    string s, t;
    cin >> s >> t;

    cout<<minWindow(s, t);

    return 0;
}