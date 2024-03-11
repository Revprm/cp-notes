#include <bits/stdc++.h>

using namespace std;
// pragma
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC num("avxb,bmi,bmi2,lzcnt,popcnt")
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
typedef vector<string> vs;
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

ll dist(const pii &a, const pii &b){
    return abs(a.fi - b.fi) + abs(a.se - b.se);
}

int main(){
    Fast
    pii a, b, c;
    ll t; cin >> t;
    while (t--){
        cin >> a.fi >> a.se >> b.fi >> b.se >> c.fi >> c.se;
        cout << (dist(a, b) + dist(a, c) - dist(b, c)) / 2 + 1 << el;
    }
    
    return 0;
}