#include<iostream>
#include<list>
#include <vector>

using namespace std;

class Graph {
    int v;
    list<int> *l;

    public:
        Graph(int v) {
            this->v = v;
            l = new list<int>[v];
        }

        void addEdge(int x, int y) {
            l[x].push_back(y);
        }

        void dfs(int node, vector<bool> &visited, list<int> &ordering) {
            visited[node] = true;

            for (int nbr : l[node]) {
                if (!visited[nbr]) {
                    dfs(nbr, visited, ordering);
                }
            }

            ordering.push_front(node);
        }

        void dfs_topological_sort() {
            vector<bool> visited(v, false);
            list<int> ordering;

            for (int i = 0; i < v; i++) {
                if (!visited[i]) {
                    dfs(i, visited, ordering );
                }
            }

            for (auto node:ordering) {
                cout<<node<<" ";
            }
            cout<<endl;
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

    g.dfs_topological_sort();

    return 0;
}