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
int main(){
    Fast
    ll n; cin >> n;
    ll total = (n * (n + 1)) / 2;

    if (total % 2 != 0) {
        cout << "NO" << el;
        return 0;
    }

    vi set1, set2;
    ll currSum = 0;
    for (ll i = n; i >= 1; i--) {
        if (currSum + i <= total / 2) {
            set1.push_back(i);
            currSum += i;
        } 
        else set2.push_back(i);
        
    }
    cout << "YES" << el;
    cout << set1.size() << el;
    for (ll i : set1) {
        cout << i << " ";
    }
    cout << el;
    cout << set2.size() << el;
    for (ll i : set2) {
        cout << i << " ";
    }
    cout << el;
    return 0;
}
