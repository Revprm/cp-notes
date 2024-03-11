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
#define Fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;

void fnl(){
    ll i, j, n, a, res = 0;
    MPII gawe;
    cin >> n;
    FOR(i, n){
        cin >> a;
        gawe[i-a]++;
    }
    for (auto it : gawe){
        ll what = it.second*(it.second-1ll)/2ll;
        res+=what;
    }
    cout << res << endl;
}

int main(){
    Fast
    int t; cin >> t;
    while (t--) fnl();
    return 0;
}