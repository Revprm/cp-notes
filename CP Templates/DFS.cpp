#include <bits/stdc++.h>
using namespace std;
#define el '\n'
#define ll long long
#define Fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef vector<int> vi;
const int MXN = 1001;
int n, u, v, vis[MXN];
vi adj[MXN];

void dfs(int u){
	cout << u << ' ';
	vis[u] = 1;
	for(int v : adj[u]){
		if(!vis[v]) dfs(v);
	}
}

int main(){
	Fast
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for(int i = 0; i < n; i++){
		if(!vis[i]) {
			dfs(i);
		}	
	}
}