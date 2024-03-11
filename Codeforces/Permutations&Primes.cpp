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
typedef map<int,int> mii;
typedef map<char, int> mci;
typedef map<char, ll> mcll;
typedef set<int> seti;
typedef multiset<int> msi;
// const
const double pi = acos(-1);
const ll modll = 1e9+7ll;
const int MAX_N = 2*10e5;

int a[MAX_N];

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
    int n, i, c; cin >> n;
    if (n == 1) cout << 1 << el;
    else if (n == 2) cout << "1 2" << el;
    else{
        c = 4;
        fill(a, a + n, 0);
        a[0] = 2, a[n / 2] = 1, a[n - 1] = 3;
        FOR(i, n){
            if (a[i] == 0) a[i] = c++;
        }
        FOR(i, n) cout << a[i] << " " << (i == n - 1 ? el : ' ');
    }
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
