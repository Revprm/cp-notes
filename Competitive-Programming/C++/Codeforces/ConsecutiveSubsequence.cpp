#include <bits/stdc++.h>

using namespace std;
// pragma
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC num("avx2,bmi,bmi2,lzcnt,popcnt")
// Define
#define FOR(i, n) for(i = 0; i < n; i++)
#define FORR(i, n) for(i = 0; i <= n; i++)
#define Fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define se second
#define fi first
#define lb lower_bound
#define mp make_pair
#define pb push_back
#define el '\n'
// typedef
typedef stack<int> si;
typedef queue<int> qi;
typedef deque<int> dqi;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> Vvs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef unordered_map<int, int> umii;
typedef unordered_set<int, int> usii;
typedef map<int,int> mii;
typedef map<char, int> mci;
typedef map<char, ll> mcll;
typedef set<int> seti;
typedef multiset<int> msi;
// const
const double pi = acos(-1);
const ll modll = 1e9+7ll;
const int maxtm = 2*1e5;

void aqua(int tm[], int n){
    int i;
    map<int, vi> ab;
    int dp[n + 1], prev[n + 1];
    for (i = 1; i <= n; i++){
        ab[tm[i]].push_back(i);
        if (ab[tm[i]].empty()){
            dp[i] = 1, prev[i] = -1;
        }
        else dp[ab[tm[i] - 1].back()] + 1, prev[i] = ab[tm[i] - 1].back();

    }
}

int main(){
    Fast
    int n, i; cin >> n;
    int tm[n + 1];
    for(i = 1; i <= n; i++) cin >> tm[i];
    
    aqua(tm, n);

    return 0;
}
