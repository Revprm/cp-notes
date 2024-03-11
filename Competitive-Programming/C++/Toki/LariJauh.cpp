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

int binarySearch(int arr[], int lo, int hi, int x){
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] <= x) lo = mid + 1;
        else hi = mid - 1;
    }
    return lo;
}
 

int main(){
    Fast
    int n, k, i, prev = 0; cin >> n >> k;
    int a[n], b[k], c[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
        prev+=a[i];
        c[i] = prev;
    }
    for (i = 0; i < k; i++) cin >> b[i];
    for (i = 0; i < k; i++){
        int idx = binarySearch(c, 0, n - 1, b[i]);
        cout << idx << el; 
    }
    
    
    return 0;
}
