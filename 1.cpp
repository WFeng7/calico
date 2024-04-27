#include <bits/stdc++.h>

using namespace std;

// #define atcoder 1
// #define codeforces 1
#define int long long

#define spc ' '
#define nl '\n'
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vecin(x) for(auto &i : (x)) cin >> i;
#define yesno(x) ((x) ? "Yes" : "No") 

#ifdef codeforces
    const ll mod = 1e9 + 7;
#endif

#ifdef atcoder
    const ll mod = 998244353;
#endif

//=============================================

void setIO(string fileName = "") {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    if(fileName.size()) {
        freopen((fileName + ".in").c_str(), "r", stdin);
        freopen((fileName + ".out").c_str(), "w", stdout);
    }
}

void solve() {
       
}

int32_t main() {
    setIO();
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}