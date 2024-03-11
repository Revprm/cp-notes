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
#define Fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define el '\n'
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
typedef vector<ll> VLL;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;

const ll B = 15;
const ll MODx = 32768;

void aqua(){
        ll res(100);
        ll x, p, q; cin >> x;
        for(p = 0; p <= B; p++){
            ll y = x + p;
            for(q = 0; q <= B; q++){
                ll steps = p + q;
                if(y % MODx == 0){
                    res = (res < steps) ? res : steps;
                }
                y *= 2;
            }
        }
    cout << res << " ";
}

int main(){

    ll n; cin >> n;
    while(n--){
        aqua();
    }
}