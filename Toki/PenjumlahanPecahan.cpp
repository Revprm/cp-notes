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

ll aqua(ll a, ll b){
    if (a % b == 0) return b;
    else return aqua(b, a % b);
}

int main(){
    Fast
    ll a, b, c, d, e, f, tmp; 
    ll under, upper1, upper2;
    cin >> a >> b;
    cin >> c >> d;
    under = b*d;
    upper1 = a*d;
    upper2 = c*b;
    e = upper1+upper2;
    f = under;
    if (e > f) tmp = aqua(e, f);
    else tmp = aqua(f, e);

    if(tmp == 1) cout << e << " " << f;
    else e/=tmp, f/=tmp, cout << e << " " << f;
    
    return 0;
}
