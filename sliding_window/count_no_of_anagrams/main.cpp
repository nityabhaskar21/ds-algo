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
// WORKING 
int no_anagrams(string txt, string pat) {
    int k = pat.length();
    int n = txt.length();

    int total = 0, count = 0;

    map<char, int> mp;
    int i = 0, j = 0;

    for (int l = 0; l < k; l++) {
        mp[pat[l]]++;
    }
    // for (auto it:mp) {
    //     cout<<it.first<<":"<<it.second<<", ";
    // }cout<<endl;
    count = mp.size();

    while (j<n) {
        // for (auto it:mp) {
        //     cout<<it.first<<":"<<it.second<<", ";
        // }cout<<endl;
        if (mp.find(txt[j])!=mp.end()) {
            mp[txt[j]]--;
            if (mp[txt[j]]==0) {
                count--;
            }
        }

        if (j-i+1<k) {
            j++;
        } else if (j-i+1==k) {
            if (count==0) {
                total++;
            }
            if (mp.find(txt[i])!=mp.end()) {
                mp[txt[i]]++;
                if (mp[txt[i]]==1) {
                    count++;
                }
            }
            i++;
            j++;
        }
    }
    return total;
}

int main()
{
    fast_cin();

    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    #endif
    string txt, pat;
    cin >> txt >> pat;

    cout<<no_anagrams(txt, pat);

    return 0;
}