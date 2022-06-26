#include<iostream>
#include<list>

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
            l[y].push_back(x);
        }

        bool isCycleHelper(int node, bool *visited, int parent) {
            visited[node] = true;

            for (auto nbr: l[node]) {
                if (!visited[nbr]) {
                    bool nbrFoundCycle = isCycleHelper(nbr, visited, node);
                    return nbrFoundCycle;
                }
                else if (parent!=nbr) {
                    return true;
                }
            }
            return false;
        }

        bool isCycle(int src) {
            bool *visited = new bool[V]{0};
            return isCycleHelper(src, visited, -1);
        }

};

       
int main() {
    
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout<<g.isCycle(0);

    return 0;
}