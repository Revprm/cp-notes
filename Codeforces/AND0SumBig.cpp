#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;
#define FOR(i, n) for(i = 0; i < n; i++)
#define FORR(i, n) for(i = 0; i <= n; i++)
#define Fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define PI 3.1415926535897932384626433832795
#define MOD 1e9+7
#define modll 1000000007ll
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;

ll aqua(ll n, ll k){
    ll res = 1ll;
    while (k != 0){
        if (k % 2ll == 1ll) res = (res*n) % modll;
        
        k >>= 1ll;
        n = (n*n) % modll;
    }
    return res;
}


void suichan(){
    ll res, n, k;
    cin >> n >> k;
    cout << aqua(n, k) << endl;
}

int main(){
    Fast
    ll t; cin >> t;
    while (t--){
        suichan();
    }
    return 0;
}

/*

all its elements are integers between 0 and 2k−1 (inclusive);
the bitwise AND of all its elements is 0;
the sum of its elements is as large as possible.

*/