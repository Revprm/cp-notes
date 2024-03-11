#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC num("avx2,bmi,bmi2,lzcnt,popcnt")
#define fst ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define el '\n'
using namespace std;

typedef pair<int, int> pii;

const int INF = INT_MAX;

int shortestPath(vector<vector<pii>>& graph, int start, int end) {
    int V = graph.size();
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<int> dist(V, INF);

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for (auto neighbor : graph[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
    return dist[end];
}

int main() {
    fst
    int V, E, a, b;
    cin >> V >> E >> a >> b;
    vector<vector<pii>> graph(V + 1); 
    for (int i = 0; i < E; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        graph[x].push_back({y, z});
        graph[y].push_back({x, z});
    }
    int shortestDist = shortestPath(graph, a, b);
    cout << shortestDist << el;

    return 0;
}
