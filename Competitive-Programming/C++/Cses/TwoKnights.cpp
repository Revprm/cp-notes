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

vll aqua(ll n) {
    vll dp(n + 1);

    dp[1] = 0;
    dp[2] = 6;

    for (ll k = 3; k <= n; k++) {
        ll chss = static_cast<ll>(k) * k;
        dp[k] = chss * (chss - 1) / 2 - 4 * (k - 1) * (k - 2);
    }

    return dp;
}

int main(){
    Fast
    ll n, k; cin >> n;

    vll ans = aqua(n);

    for (k = 1; k <= n; k++) {
        cout << ans[k] << el;
    }

    return 0;
}
