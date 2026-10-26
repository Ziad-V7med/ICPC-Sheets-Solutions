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
    string s; cin >> s;
    map<string,int> mp;
    for (int i = 0;i < 10;i++) {
        string t; cin >> t;
        mp[t] = i;
    }
    for (int i =0 ;i < 8;i ++) {
        string t = s.substr(i*10,10);
        cout << mp[t];
    }
}

signed main() {
    kilua();
    ll tc = 1;

    while (tc--) {
        solve();
    }
}
