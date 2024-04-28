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
    string s, p;
    cin >> s >> p;

    if (p.length() == 1 || p.length() > s.length()) {
        cout << "IMPOSSIBLE" << nl;
        return;
    }

    int lower = 0, upper = p.length();
    while (lower != upper) {
        int mid = (lower + upper + 1) / 2;
        if (s.find(p.substr(0, mid)) != string::npos) {
            lower = mid;
        } else {
            upper = mid - 1;
        }
    }

    if (lower == p.length()) {
        cout << 0 << spc << 1 << spc << 1 << spc << p.length() - 1 << nl;
        return;
    }

    int start = s.find(p.substr(0, lower));
    string new_s = s.substr(0, start) + " " + s.substr(start + lower);
    if (new_s.find(p.substr(lower)) != string::npos) {
        cout << start << spc << lower << spc;
        if (s.find(p.substr(lower), start + lower) == string::npos) {
            cout << s.substr(0, start).find(p.substr(lower)) << spc;
        } else {
            cout << s.find(p.substr(lower), start + lower) << spc;
        }
        cout << p.length() - lower << nl;
    } else {
        cout << "IMPOSSIBLE" << nl;
    }
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
