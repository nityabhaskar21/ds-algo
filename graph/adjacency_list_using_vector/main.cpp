#include <bits/stdc++.h>
using namespace std;

int main() {
    
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif

    int n, m;               //no of nodes, and no. of edges
    cin>>n>>m;
    vector<int> adj[n+1];   //id 0 baesd nodes, then [n]

    for (int i=0; i<m; i++) {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //print
    int i = 0;
    for (auto neighboursList : adj) {
        cout<<i++<<" -> ";
        for (auto neighbour: neighboursList) {
            cout<<neighbour<<", ";
        }
        cout<<endl;
    }
 

    return 0;
}