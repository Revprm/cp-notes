// Pragma
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC num("avx2,bmi,bmi2,lzcnt,popcnt")
// Header
#include <bits/stdc++.h>
using namespace std;
// Define
#define FOR(i, n) for(i = 0; i < n; i++)
#define FORR(i, n) for(i = 1; i <= n; ++i)
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
typedef unordered_map<char, int> umci;
typedef unordered_set<int, int> usii;
typedef map<int,int> mii;
typedef map<char, int> mci;
typedef map<char, ll> mcll;
typedef set<int> seti;
typedef multiset<int> msi;
// const
const double pi = acos(-1);
const ll modll = 1e9+7ll;

ll gcd(ll a, ll b){
    if (a % b == 0) return b;
    else return gcd(b, a % b);
}

ll modex(ll exp){
    ll base = 2;
    ll res = 1;
    while (exp > 0) {
        if (exp & 1) {
            res = (res * base) % modll;
        }
        base = (base * base) % modll;
        exp >>= 1;
    }
    return res % modll;
}

void solve(){   
    int n, i, p = 1, ans = 0; cin >> n;
    vi a(n + 1), b(n + 1);
    FORR(i, n) cin >> a[i];
    FORR(i, n) cin >> b[i];
    
    vi ma(2*n+1), mb(2*n+1);
    for (i = 2; i <= n; ++i){
        if(a[i] != a[i - 1]){
            ma[a[i - 1]] = max(ma[a[i - 1]], i - p);
            p = i;
        }

    }

    ma[a[n]] = max(ma[a[n]], n - p + 1);
    p = 1;

    for(i = 2; i <= n; ++i){
        if(b[i] != b[i - 1]){
            mb[b[i - 1]] = max(mb[b[i - 1]], i - p);
            p = i;
        }  
    }

    mb[b[n]] = max(mb[b[n]], n - p + 1);
    
    for (i = 1; i <= 2*n; ++i){
        ans = max(ans, ma[i] + mb[i]);
    }
    cout << ans << el;
}   

int main(){
    Fast
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
