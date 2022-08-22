#include <iostream>
#include <list>

using namespace std;

class Graph {
    int V;
    list <pair<int, int>> edgeList;

    public:
        Graph(int v) {
            this->V = v;
        }

        void addEdge(int x, int y) {
            edgeList.push_back(make_pair(x, y));
        }

        //Find
        int findSet(int x, int parent[]) {
            if (parent[x] == -1) {
                return x;
            }
            else return  parent[x] = findSet(parent[x], parent);
        }

        //Union
        void unionSet(int x, int y, int parent[], int rank[]) {
            int s1 = findSet(x, parent);
            int s2 = findSet(y, parent);

            if (s1!=s2) {
                if (rank[s1]>rank[s2]) {
                    parent[s2] = s1;
                    rank[s1]+=s2;
                } else {
                    parent[s1] = s2;
                    rank[s2]+=s1;
                }
            }
         
        }

        bool containsCycle () {
            // DSU logic to check if graph contains cycle or not
            int parent[V];
            int rank[V];

            for (int i = 0; i < V; i++) {
                parent[i] = -1;
                rank[i] = 1;
            }

            for (auto edge: edgeList) {
                int s1 = findSet(edge.first, parent);
                int s2 = findSet(edge.second, parent);

                if (s1!=s2) {
                    unionSet(s1, s2, parent, rank);
                } else {
                    return true;
                }
            }
           return false;
        }

};


int main() {

    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);

    cout<<g.containsCycle()<<endl;

    return 0;
}