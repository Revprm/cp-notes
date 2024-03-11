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
typedef vector<bool> vb;
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
const int MaxSize = 77777;

void sieveOfEratosthenes(vb& isPrime){
    int n = isPrime.size();
    for (int i = 2; i < n; i++)isPrime[i] = 1;
    for (int p = 2; p * p < n; p++)
    {
        if (isPrime[p]){
            for (int i = p * p; i < n; i += p) isPrime[i] = 1;
        }
    }
}

int main(){
    int T, maxK, i, j, count, prime; cin >> T;
    vi queries(T);
    for (int i = 0; i < T; i++){
        cin >> queries[i];
        maxK = max(maxK, queries[i]);
    }
    vb isPrime(MaxSize, 0);
    sieveOfEratosthenes(isPrime);

    for (i = 0; i < T; i++){
        count = 0;
        prime = 0;
        for (j = 2; j < MaxSize; j++){
            if (isPrime[j]){
                count++;
                if (count == queries[i]){
                    prime = j;
                    break;
                }
            }
        }

        cout << prime << endl;
    }

    return 0;
}
