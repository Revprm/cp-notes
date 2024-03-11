#pragma GCC optimize("O3,unroll-loops")
#pragma GCC num("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define sz(x) (x).(size)
#define ll long long
#define ull unsigned long long
#define se second
#define fi first
#define lb lower_bound
#define ub upper_bound
#define mp make_pair
#define pb push_back
#define all(x)  x.begin(), x.end()
#define EACH(x, a) for(auto& x: a)
#define el '\n'

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

#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)

void DBG() {
    cerr << " ]" << endl;
}
template<class H, class... T> void DBG(H h, T... t) { cerr << ' ' << h; DBG(t...); }
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)

const double pi = acos(-1);
const ll modll = 1e9+7ll;

bool compare(const pii &a, const pii &b){ return a.se < b.se; }

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
    string s; cin >> s;
    bool chk = 1;
    FOR(i, 1, s.length()){
        if(s[i] < s[i - 1]) chk = 1;
        else {
            chk = 0; 
            break;
        }
    }
    if(chk) cout << "Yes" << el;
    else cout << "No" << el;
}

int main(){
    Fast
    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
