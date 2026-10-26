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
    string s; cin >> s;
    map<string,int> mp;
    for (int i = 0;i+1 < n;i ++) {
        mp[s.substr(i,2)]++;
    }
    string ans;
    int cnt = 0;
    for (auto &[k,v]:mp) {
        if (v > cnt) {
            cnt = v;
            ans = k;
        }
    }
    cout << ans << '\n';
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
