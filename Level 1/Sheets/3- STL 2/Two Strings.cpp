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
    string s,t; cin >> s >> t;
    vector<ll> v(n); for (auto &i:v) cin >> i;
    map<ll,vector<char>> sc,tc;
    for (int i = 0;i < n;i++) {
        sc[v[i]].push_back(s[i]);
        tc[v[i]].push_back(t[i]);
    }

    for (auto it = sc.begin(); it != sc.end(); it++) {
        vector<char> ss = it->second;
        vector<char> ts = tc[it->first];

        sort(ss.begin(),ss.end());
        sort(ts.begin(),ts.end());

        if (ss != ts) {
            cout << "NO" << '\n';
            return;
        }
    }

    cout << "YES\n";
}

signed main() {
    kilua();
    ll tc = 1;
    cin >> tc;
    // srand(time(0));
    while (tc--) {
        solve();
    }
}
