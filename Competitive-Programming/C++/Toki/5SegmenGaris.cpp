// pragma
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC num("avx2,bmi,bmi2,lzcnt,popcnt")   
// header
#include <bits/stdc++.h>

using namespace std;
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
struct titik{
    int x, y;
};

bool onSegment(titik p, titik q, titik r){
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
       return 1;
 
    return 0;
}

int orientation(titik p, titik q, titik r){
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;  
 
    return (val > 0) ? 1 : 2; 
}

bool check(titik p1, titik q1, titik p2, titik q2){
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);
 

    if (o1 != o2 && o3 != o4) return 1;
    if (o1 == 0 && onSegment(p1, p2, q1)) return 1;
    if (o2 == 0 && onSegment(p1, q2, q1)) return 1;
    if (o3 == 0 && onSegment(p2, p1, q2)) return 1;
    if (o4 == 0 && onSegment(p2, q1, q2)) return 1;
 
    return 0; 
}

int main(){
    Fast
    ll n; cin >> n;
    while (n--){
        titik a, b, c, d, e, f;
        cin >> a.x >> a.y >> b.x >> b.y >> e.x >> e.y >> f.x >> f.y;
        c.x = a.x;
        c.y = b.y;
        d.x = b.x;
        d.y = a.y;
        if (check(e, f, a, c) || check(e, f, a, d) || check(e, f, b, c) || check(e, f, b, d)){
            cout << "YA" << el;
        }
        else cout << "TIDAK" << el;
    }
    
    return 0;
}
