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
const ll mod = 1e9+7ll;
int main(){
    Fast
    ll n, i, j; cin >> n;
    ll arr[n], ans[n];
    
    if (n == 1){
        cout << 1 << el;
        return 0;
    }
    
    if (n == 3 || n == 2){
        cout << "NO SOLUTION" << el;
        return 0;
    }
    ll a = 0;
    for (i = 1; i <= n; i++){
        arr[i] = i; 
    }
    for (i = 1; i <= n; i+=2){
        ans[a] = arr[i];
        a++;
    }
    
    for (i = 2; i <= n; i+=2){
        ans[a] = arr[i];
        a++;
    }
    if (n == 4){
        for (i = 0; i < a; i++){
            for (j = i + 1; j < a; j++){
                if (abs(ans[i] - ans[j]) == 1){
                    swap(ans[i], ans[j]);
                } 
            }   
        }    
    }
    
    for (i = 0; i < a; i++) cout << ans[i] << " ";
    

    return 0;
}