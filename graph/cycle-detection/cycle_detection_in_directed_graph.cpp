#include<iostream>
#include<list>
#include<vector>

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

        bool isCycleHelper(int node, bool *visited, vector<bool> &inStack) {
            // returns true if backedge is found otherwise false

            visited[node] = true;
            inStack[node] = true;

            for (auto nbr: l[node]) {
                if (inStack[nbr]) {
                    return true;
                }
                else if (!visited[nbr]) {
                    bool nbrFoundCycle = isCycleHelper(nbr, visited, inStack);
                    if (nbrFoundCycle) return true;
                }
             
            }
            inStack[node] = false;
            return false;
        }

        bool isCycle(int src) {
            bool *visited = new bool[V]{0};
            vector <bool> presentInStack(V, 0);
            return isCycleHelper(src, visited, presentInStack);
        }

};

int main() {
    
    Graph g(6);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);
    g.addEdge(0, 4);
    g.addEdge(0, 5);
    g.addEdge(5, 4);

    cout<<g.isCycle(0);

    return 0;
}