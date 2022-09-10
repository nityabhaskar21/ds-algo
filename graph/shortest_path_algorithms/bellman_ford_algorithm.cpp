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

class Graph {
    int n;
    vector<vector<int>> edgeList;

    public:
        Graph(int n) { 
            this->n = n;
        }

        void addEdge(int x, int y, int w) {
            edgeList.push_back({x, y, w});
        }

        vector<int> shortestPath(int src) {
            vector<int> distance(n+1, INT_MAX);
            distance[src] = 0;

            for (int i = 0; i < n - 1; i++) {
                for (auto edge: edgeList) {
                    int u = edge[0];
                    int v = edge[1];
                    int wt = edge[2];
                    if (distance[u]!=INT_MAX and distance[v] > (distance[u] + wt)) {
                        distance[v] = distance[u]+wt;
                    }
                }
            }

            for (auto edge: edgeList) {
                    int u = edge[0];
                    int v = edge[1];
                    int wt = edge[2];
                    if (distance[u]!=INT_MAX && distance[v] > distance[u] + wt) {
                        cout<<"negative edge cycle";
                        exit(0);
                    }
                }
            return distance;
        }
};
 

int main()
{
    fast_cin();

    #ifndef ONLINE_JUDGE
    //    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    #endif

    Graph g(4);
    g.addEdge(0, 1, 4);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 3, 2);
    g.addEdge(3, 4, 3);

    vector<int> distances = g.shortestPath(0);
    for (int i = 0; i < distances.size(); i++) {
        cout<<distances[i]<<" ";
    }


    return 0;
}