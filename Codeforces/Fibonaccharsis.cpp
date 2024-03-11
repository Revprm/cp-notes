// Pragma
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC num("avx2,bmi,bmi2,lzcnt,popcnt")
// Header
#include <bits/stdc++.h>
using namespace std;
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
    int n, k; 
    cin >> n >> k;
    if(k < 3 || k > 37){
        cout << 0 << endl;
        return;
    }
    int ans = 0;
    vector<int> fib(38, 1);
    for (int i = 2; i <= 37; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int x = fib[k - 3], y = fib[k - 2];
    for (int i = 0; i <= n; i++){
        if(n - y * i >=0 && (n - y * i) % x == 0){
            if(i >= (n - y * i) / x){
                ans++;
            }
        }
    }
    cout << ans << endl;
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
