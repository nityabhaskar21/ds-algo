#include <iostream>
#include <list>
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

        void addEdge(int x, int y, bool undir=true) {
            l[x].push_back(y);

            if (undir) {
                l[y].push_back(x);
            }
        }

        void printGraph() {
            for (int i = 0; i < V; i++) {
                cout<<i<<"-->";
                for (auto node: l[i]) {
                    cout<<node<<" ";
                }
                cout<<endl;
            }
        }

        // shortest path for each vertex from src in graph using BFS technique.
        // Here we have unweighted graph. So weight of each vertex is considered 1.
        void shortestPath(int src) {
            queue<int> q;
            bool *visited = new bool[V]{0};
            vector<int> distance(V, 0);
            vector<int> parent(V, 0);
            
            distance[src] = 0;
            parent[src] = src;

            q.push(src);
            visited[src] = true;

            while (!q.empty()) {
                int front = q.front();
                q.pop();

                for (auto node:l[front]) {
                    if (!visited[node]) {
                        parent[node] = front;
                        distance[node] = distance[parent[node]]+1;
                        q.push(node);
                        visited[node] = true;
                    }
                }
            }

            for (int i = 0; i < V; i++) {
                cout<<i<<"->"<<distance[i]<<endl;
            }
        }
};


int main() {

    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    // g.printGraph();

    g.shortestPath(0);

    return 0;
}