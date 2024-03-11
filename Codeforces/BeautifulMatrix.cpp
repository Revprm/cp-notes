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
    int a[5][5];
    int i, j;
    int x, y;
    int xMid = 3, yMid = 3, ans = 0;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            cin >> a[i][j];
            if (a[i][j] == 1) x = i + 1, y = j + 1;
        }
    }
    // cout << x << " " << y << el;
    if (x == xMid && y == yMid) cout << abs(xMid-x) << el;
    else if (x == xMid && y < yMid) cout << abs(yMid-y) << el;
    else if (x == xMid && y > yMid) cout << abs(yMid-y) << el;
    else if (x < xMid && y == yMid) cout << abs(xMid-x) << el;
    else if (x > xMid && y == yMid) cout << abs(xMid-x) << el;
    else cout << abs(x - xMid) + abs(y-yMid) << el;

    return 0;
}