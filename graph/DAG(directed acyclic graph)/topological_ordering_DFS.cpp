#include <iostream>
#include <list>
#include <vector>
#include <queue>

using namespace std;

class Graph {
    int V;
    list<int> *l;

    public: 
        Graph(int v) {
            this->V = v;
            l = new list<int>[V];
        }

        void addEdge(int x, int y) {
            l[x].push_back(y);
        }

        void dfs(int node, vector<bool> &visited, list<int> &ordering) {
            visited[node] = true;

            for (auto nbr: l[node]) {
                if (!visited[nbr]) {
                    dfs(nbr, visited, ordering);
                }
            }

            ordering.push_front(node);
            return;
        }

        void dfsTopologicalSort() {
           vector<bool> visited(V, 0);
           list<int> ordering;

           for (int i = 0; i < V; i++) {
                if (!visited[i]) {
                    dfs(i, visited, ordering);
                }
           }

           for (auto x:ordering) {
            cout<<x<<" ";
           }

        }
};

int main() {

    Graph g(6);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(4, 5);
    g.addEdge(1, 4);
    g.addEdge(1, 2);

    g.dfsTopologicalSort();
    // cout<<"hi";

    return 0;
}