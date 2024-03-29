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

// This only works for odd lenghts palindromes.
string find_palindrome(string str) {
    int len = str.length();
    int startPalindromeIndex = 0;
    int endPalindromeIndex = 0;
    int lenPalindrome = 0;

    for (int i = 1; i < len - 1; i++) {
        int left = i-1;
        int right = i+1;
 
        // cout<<"left: "<<left<<", right: "<<right<<endl;

        while (left >=0 && right < len) {
            if (str[left] != str[right]) {
                break;
            }
            left--;
            right++;
        }
        
        if (right - left + 1 > lenPalindrome) {
            startPalindromeIndex = left+1;
            endPalindromeIndex = right-1;
            lenPalindrome = endPalindromeIndex - startPalindromeIndex + 1;
        }
        
    }
    return str.substr(startPalindromeIndex, lenPalindrome);
}

// This works for odd and even lenghts palindromes.
string find_palindrome1(string s) {
    int len = s.length();
    
    int  palindromeLen = 0;
    int start = 0;
    
    for (int i = 0; i < len; i++) {
        
        //for odd length
        int left = i-1;
        int right = i+1;
        int tempLength = 1;
        
        while ((left >=0 && right <len) && s[left] == s[right]) {
            tempLength+=2;
            left--;
            right++;
        }
        
        if (tempLength > palindromeLen) {
            palindromeLen = tempLength;
            start = left+1;
        }
        
        //for even length
        left = i;
        right = i+1;
        tempLength = 0;
        while ((left >=0 && right <len) && s[left] == s[right]) {
            tempLength+=2;
            left--;
            right++;
        }
        
        if (tempLength > palindromeLen) {
            palindromeLen = tempLength;
            start = left+1;
        }
        
    }
    
    return s.substr(start, palindromeLen);
}
 

int main()
{
    fast_cin();

    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    #endif

    string str;
    cin >> str;
    // cout<<find_palindrome(str);
    cout<<find_palindrome1(str);

    return 0;
}