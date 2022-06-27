#include <iostream>
#include <list>

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

};

int main() {

    Graph g(6);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(4, 5);
    g.addEdge(1, 4);
    g.addEdge(1, 2);



    return 0;
}