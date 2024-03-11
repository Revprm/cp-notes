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
typedef set<int> seti;
typedef multiset<int> msi;
// const
const double pi = acos(-1);
const int mod = 1e9+7;
const ll modll = 1e9+7ll;

const int maxArr = 2*1e5;

bool aqua(ll arr[], ll lo, ll hi, ll num) {
    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;

        if (arr[mid] == num) return 1;
        else if (arr[mid] < num) lo = mid + 1;
        else hi = mid - 1;
    }

    return 0;
}

int main(){
    ll n, i, j; cin >> n;
    ll arr[maxArr];
    for (i = 1; i < n; i++){
        cin >> arr[i];
    }
    ll maxll = *max_element(arr, arr + n);
    if (maxll != n) maxll = n;
    
    sort(arr, arr+n);
    bool chk[maxArr] = {0};
    // cout << maxll;
    for (i = 1; i <= maxll; i++) {
        if (aqua(arr, 0, n - 1, i) && !chk[i]) {
            chk[i] = 1;
        }
    }
    for (i = 1; i <= maxll; i++){
        if (!chk[i]) cout << i << " ";
    }
    
}