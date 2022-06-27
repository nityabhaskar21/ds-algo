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

        // Also called Kahn's algorithm
        void topologicalSort() {
            vector<int> inEdges(V, 0);
            vector<bool> visited(V, 0);
           

            for (int i = 0; i < V; i++) {
                for (auto nbr: l[i]) {
                    inEdges[nbr]++;
                }
            }       
            queue<int> q;
            vector<int> traversedOrder;

            for (int i = 0; i < V; i++) {
                if (inEdges[i] == 0) {
                    q.push(i);
                    visited[i] = true;
                    traversedOrder.push_back(i);
                }
            }     

            while (!q.empty()) {
                int front = q.front();
                visited[front] = true;
                q.pop();

                for (auto nbr: l[front]) {
                    inEdges[nbr]--;
                    if (!visited[nbr]) {
                        q.push(nbr);
                    }
                    
                    if (inEdges[nbr] == 0) {
                        traversedOrder.push_back(nbr);
                    }
                }
            }

            cout<<"Possible topoligal order: \n";
            for (auto i: traversedOrder) {
                cout<<i<<" ";
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

    g.topologicalSort();
    // cout<<"hi";

    return 0;
}