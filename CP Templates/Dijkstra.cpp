#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e15;

int n, m;
vector<ar<int,2>> adj[MAX_N];
vector<ll> dist;

void dijkstra(int s) {
    dist.assign(n + 1, LINF);
    priority_queue<ar<ll,2>, vector<ar<ll,2>>, greater<ar<ll,2>>> pq;
    dist[s] = 0; pq.push({0, s});
    while (pq.size()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d > dist[u]) continue;
        for (auto [v, w] : adj[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    } 
}
 
void solve() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v, w; cin >> u >> v >> w;
        adj[u].pb({v, w});
    }
    dijkstra(1);
    for (int i = 1; i <= n; i++) cout << dist[i] << " ";
    cout << "\n";
}
 
int main() {
	Fast
	int t; cin >> t;
	while (t--){
		solve();
	}
	
}