#include <bits/stdc++.h>
#define vll vector<ll>
#define ll long long
using namespace std;
using namespace chrono;

void kilua() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
}

const ll mod = 1e9 + 7;
const ll N = 1e6 + 5;
const ll lg = 22;
mt19937 rnd(system_clock::now().time_since_epoch().count());

void solve() {
    int n; cin >> n;
    map<string,string> mp;
    map<string,string> mp2;
    int cnt = 0;
    for (int i =0 ;i < n;i ++) {
        string s,t; cin >> s >> t;
        if (mp.find(s) != mp.end()) {
            mp2[mp[s]] = t;
            mp[t] = mp[s];
            mp.erase(s);
        }
        else {
            mp[t] = s;
            mp2[s] = t;
        }
    }
    cout << mp2.size() << '\n';
    for (auto &[k,v]:mp2) {
        cout << k << " " << v << '\n';
    }
}

signed main() {
    kilua();
    ll tc = 1;
    // cin >> tc;
    // srand(time(0));
    while (tc--) {
        solve();
    }
}
