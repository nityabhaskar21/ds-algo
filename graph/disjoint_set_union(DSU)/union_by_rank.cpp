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

        int addEdge(int x, int y) {
            edgeList.push_back(make_pair(x, y));
        }

        //Find
        int findSet(int x, int parent[]) {
            if (parent[x] == -1) {
                return x;
            }
            else return findSet(parent[x], parent);
        }

        //Union
        void unionSet(int x, int y, int parent[]) {
         
        }

        bool containsCycle () {
            // DSU logic to check if graph contains cycle or not
           
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