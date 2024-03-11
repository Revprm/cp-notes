#include <bits/stdc++.h>

using namespace std;
// pragma
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
// define
#define FOR(i, n) for (i = 0; i < n; i++)
#define FORR(i, n) for (i = 0; i <= n; i++)
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
typedef map<int, int> mii;
typedef set<int> seti;
typedef multiset<int> msi;

void aqua(){
    int n, a, b, c; cin >> n;
    vi v(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> v[i];
        if (v[i] == 1) a = i;
        if (v[i] == 2) b = i;
        if (v[i] == n) c = i;
        
    }

    if ((c > b && b > a) || (a > b && b > c)) cout << b << " " << c << endl;
    else if ((a > b && c > b && c > a) || (b > a && b > c && a > c)) cout << a << " " << c << endl;
    else cout << 1 << " " << 1 << endl;
    
}

int main(){
    Fast 
    int t; cin >> t;
    while (t--){
        aqua();
    }
    return 0;
}