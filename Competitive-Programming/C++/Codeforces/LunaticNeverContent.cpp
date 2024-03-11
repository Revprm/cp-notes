#include <bits/stdc++.h>

using namespace std;
#define FOR(i, n) for(i = 0; i < n; i++)
#define FORR(i, n) for(i = 0; i <= n; i++)
#define Fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define PI 3.1415926535897932384626433832795
#define MOD 1e9+7
#define modll 1000000007ll
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> Vvs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef map<int,int> mii;
typedef set<int> si;
typedef multiset<int> msi;

const int maxArr = 1e5;

ll an[maxArr];

ll aqutan(ll a, ll x){
    return x ? aqutan(x, a % x) : a;
}

void aqua(int n){
    ll ans = 0;
    for (int i = 0; i < n; i++){
        int x = an[i];
        int y = an[n - i - 1];
        if (x == y) continue;
        ll res = abs(x-y);
        ans = aqutan(ans, res);
    }
    cout << ans << '\n';
    
}

int main(){
    Fast
    int t, n; cin >> t;
    ll a;
    while (t--){
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> an[i];
        }
        aqua(n);
    }
    return 0;
}
