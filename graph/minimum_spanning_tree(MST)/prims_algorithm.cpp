#include <iostream>
#include <list>
#include <vector>
#include <queue>

using namespace std;

class Graph {
    int V;
    vector<pair<int, int>> *l;          // Adjacency list with vertex with weights

    public:
        Graph(int v) {
            this->V = v;
            l = new vector<pair<int, int>>[v];
        }

        void addEdge(int x, int y, int w) {
            //undirected weighted graph
            l[x].push_back({y, w});
            l[y].push_back({x, w});
        }

        int primsAlgorithm() {
            //min heap of pair{weight, node}
            priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

            bool *visited = new bool[V]{0};
            int ans = 0;

            q.push({0, 0});

            while (!q.empty()) { 
                pair<int, int> best = q.top();
                q.pop();

                if (visited[best.second]) {
                    continue;
                }
               
                visited[best.second] = true;
                ans += best.first;
                
                for (auto i:l[best.second]) {
                    if (!visited[i.first]){
                        q.push({i.second, i.first});
                    }
                }
            }

        return ans;
        }
};


int main() {

    Graph g(4);
   
    g.addEdge(0, 1, 1);
    g.addEdge(0, 2, 2);
    g.addEdge(0, 3, 2);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 2);
    g.addEdge(3, 2, 3);

    cout<<g.primsAlgorithm();

    return 0;
}