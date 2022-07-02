#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <climits>

using namespace std;

class Graph {
    int V;
    list<pair<int, int>> *l;

    public:
        Graph(int v) {
            this->V = v;
            l = new list<pair<int, int>>[v];

        }

        void addEdge(int x, int y, int w, bool undir = true) {
            l[x].push_back({w, y});
            if (undir) {
                l[y].push_back({w, x});
            }
        }

        int dijkhstra_algo(int src, int dst) {  
            set<pair<int, int>> s;
            vector<int> distanceList(V, INT_MAX);

            distanceList[src] = 0;
            s.insert({0, src});

            while (!s.empty()) {
                auto it = s.begin();
                int node = it->second;
                int distanceTillNow = it->first;
                s.erase(it);

                for (auto nbrPair: l[node]) {
                    int nbr = nbrPair.second;
                    int currEdge = nbrPair.first;

                    if (distanceTillNow + currEdge < distanceList[nbr]) {

                        auto f = s.find({distanceList[nbr], nbr});
                        if (f!=s.end()) {
                            s.erase(f);
                        }

                        distanceList[nbr] = distanceTillNow + currEdge;
                        s.insert({distanceList[nbr], nbr});
                    }

                }
            }

            for (int i = 0; i < V; i++) {
                cout<<"Node "<<i<<"  Distance "<<distanceList[i]<<endl;
            }

            return distanceList[dst];
        }

};

int main() {

    Graph g(5);
   
    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 2);
    g.addEdge(0, 2, 4);
    g.addEdge(0, 3, 7);
    g.addEdge(3, 2, 2);
    g.addEdge(3, 4, 3);


    cout<<g.dijkhstra_algo(0, 4);

    return 0;
}