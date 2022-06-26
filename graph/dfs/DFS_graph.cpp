#include <iostream>
#include <list>

using namespace std;

class Graph {
    int V;
    list<int> *l;

    public:
        Graph(int v) {
            this->V = v;
            this->l = new list<int>[V];
        }

        void addEdge(int x, int y, bool undir=true) {
            l[x].push_back(y);

            if (undir) {
                l[y].push_back(x);
            }
        }

        void dfsHelper(int src, bool *visited) {
            cout<<src<<" ";
            visited[src] = true;

            for (auto node: l[src]) {
                if (!visited[node]) {
                    dfsHelper(node, visited);
                }
            }
            return;
        }

        void dfs(int src) {
            bool *visited  = new bool[V]{0};
            dfsHelper(src, visited);
        }
};

int main() {

    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    // g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    g.dfs(0);

    return 0;
}