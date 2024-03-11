#include <bits/stdc++.h>

using namespace std;
// pragma
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
// define
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
#define PI acos(-1)
#define MOD 1000000007
#define modll 1000000007ll
// dsa typedef
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
typedef set<int> seti;
typedef multiset<int> msi;


void aqua(){
    ll n, i, num; cin >> n;
    vll a, b;
    for (i = 0; i < n; i++){
        cin >> num;
        a.pb(num);
    }
    for (i = 0; i < n; i++){
        cin >> num;
        b.pb(num);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for (i = 0; i < n; i++){
        if (a[i] <= b[i]){
            cout << 0 << '\n';
            return;
        }   
    }
    

    ll ans = 1ll;
    for (i = 0; i < n; i++){
        ll temp = a[i];
        ll res = lb(b.begin(), b.end(), temp) - b.begin();
        res-=i;
        ans = (ans*res) % 1000000007ll;
    }
    cout << ans << '\n';
}


int main(){
    Fast
    int t; cin >> t;
    while (t--){
        aqua();
    }
    return 0;
}
