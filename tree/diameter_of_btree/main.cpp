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

struct Node {
    struct Node *left, *right;
    int data;

};

Node* newNode(int data) {
    Node *t = new Node();
    t->left=t->right=NULL; t->data=data;
    t->data=data;
    return t;
}

void print(Node *root) {
    if (root == NULL) return;

    print(root->left); 
    cout<<root->data<<" ";
    print(root->right); 
}
 

int main()
{
    fast_cin();

    // #ifndef ONLINE_JUDGE
    //    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    // #endif

    int t, x;
    cin >> t >> x;
    Node *root = newNode(x);

    int val = 0;
    string path = "";
    Node* tmp = root;

    for (int i = 0; i < t-1; i++) {
        cin>>path>>val;
        for (int j = 0; j < path.size()-1; j++) {
            if (path[j] == 'L') {
                tmp = tmp->left;
            } else if (path[j] == 'R') {
                tmp = tmp->right;
            }
        }
        if (path[path.size()-1] == 'L') {
            tmp->left = newNode(val); 
        } else if (path[path.size()-1] == 'R') {
            tmp->right = newNode(val);
        }
        
        tmp=root;
    }
    // print(root);



    return 0;
}