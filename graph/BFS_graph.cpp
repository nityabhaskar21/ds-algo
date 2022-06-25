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
    int V;
    list<int> *neighbours;

    public:
        Graph(int v) {
            this->V = v;
            this->neighbours = new list<int>[V];
        }

        void addEdge(int i, int j, bool undir=true) {
            neighbours[i].push_back(j);

            if (undir) {
                neighbours[j].push_back(i);
            }
        }

        void BFSTraversal(int source) {
            queue<int> q;
            bool *visited = new bool[V]{0};

            q.push(source);
            visited[source] = true;

            while (!q.empty()) {
                int f = q.front();
                cout<<f<<endl;
                q.pop();

                for (auto nbr: neighbours[f]) {
                    if (!visited[nbr]) {
                        q.push(nbr);
                        visited[nbr] = true;
                    }
                }
            }
        }

        void printGraph() {
            for (int i=0; i<V; i++) {
                cout<<i<<"-->";
                for(auto node: neighbours[i]) {
                    cout<<node<<" ";
                }
                cout<<endl;
            }
        }

};

int main()
{
    fast_cin();

    // #ifndef ONLINE_JUDGE
    //    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    // #endif

    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(4, 5);
    g.addEdge(0, 4);
    g.addEdge(3, 4);

    g.BFSTraversal(1);

    return 0;
}