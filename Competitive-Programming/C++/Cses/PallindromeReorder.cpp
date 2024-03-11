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
typedef unordered_map<char, int> umci;
typedef unordered_set<int, int> usii;
typedef map<int,int> mii;
typedef map<char, int> mci;
typedef map<char, ll> mcll;
typedef set<int> seti;
typedef multiset<int> msi;
// const
const double pi = acos(-1);
const ll modll = 1e9+7ll;

string aqua(string& str) {
    int n = str.length(), i;
    umci count;

    for (char c : str) count[c]++;
    string palindrome;
    char oddChar = '\0';


    for (auto& pair : count) {
        if (pair.se % 2 == 0) {
            for (i = 0; i < pair.se / 2; i++) {
                palindrome += pair.fi;
            }
        } 
        else {
            if (oddChar != '\0') return "NO SOLUTION";
            
            oddChar = pair.first;
            for (i = 0; i < pair.se / 2; i++) {
                palindrome += pair.fi;
            }
        }
    }
    string secondHalf = palindrome;
    reverse(secondHalf.begin(), secondHalf.end());

    if (oddChar != '\0') palindrome += oddChar;

    palindrome += secondHalf;
    return palindrome;
}


int main(){
    Fast
    string str; cin >> str;
    cout << aqua(str) << el;
    return 0;
}
