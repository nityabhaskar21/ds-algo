#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

class DSU{
    int *parent;
    int *rank;

    public:
        DSU(int n) {
            parent = new int[n];
            rank = new int[n];

            for (int i = 0; i < n; i++) {
                parent[i] = -1;
                rank[i] = 1;
            }
        }

        //Find
        int find (int i) {
            if (parent[i] == -1) {
                return i;
            }

            return parent[i] = find(parent[i]);
        }

        //Unite
        void unite (int x, int y) {
            int s1 = find(x);
            int s2 = find(y);

            if (s1 != s2) {
                //union by rank
                if (rank[s1] < rank[s2]) {
                    parent[s1] = s2;
                    rank[s2] += s1;
                } else {
                    parent[s2] = s1;
                    rank[s1] += s2;
                }
            }
        }
};


class Graph {
    int V;
    vector<vector<int>>edgeList;          

    public:
        Graph(int v) {
            this->V = v;
        }

        void addEdge(int x, int y, int w) {
            edgeList.push_back({w, x, y});
        }

        int kruskalAlgorithm() {
            // sort all edges based on weights
            sort(edgeList.begin(), edgeList.end());

            DSU s(V);

            int ans = 0;
            for (auto edge: edgeList) {
                int w = edge[0];
                int x = edge[1];
                int y = edge[2];

                // take that edge in MST if it doesnot from a cycle.
                if (s.find(x) != s.find(y)) {
                    s.unite(x, y);
                    ans += w;
                }
            }
            return ans;
        }
};


int main() {

    Graph g(4);
   
    g.addEdge(0, 1, 1);
    g.addEdge(0, 2, 2);
    g.addEdge(0, 3, 2);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 2);
    g.addEdge(3, 2, 3);


    cout<<g.kruskalAlgorithm();

    return 0;
}