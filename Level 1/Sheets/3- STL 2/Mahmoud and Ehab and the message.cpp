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
    int n,k,m; cin >> n >> k >> m;
    map<string,ll> mp;
    vector<string> v(n); for (auto &i:v) cin >> i;
    vector<ll> cost(n);
    for (int i = 0;i < n;i ++) {
        cin >> cost[i];
        mp[v[i]] = cost[i];
    }

    vector<vector<ll>> gr(k);
    for (int i = 0;i < k;i ++) {
        int s; cin >> s;
        for (int j = 0;j < s;j ++) {
            int x; cin >> x;
            x--;
            gr[i].push_back(x);
        }
    }

    for (int i = 0; i < k; i++) {
        ll mn = 1e9;
        for (auto &j:gr[i]) {
            mn = min(mn,mp[v[j]]);
        }
        for (auto &j:gr[i]) {
            mp[v[j]] = mn;
        }
    }

    ll sum = 0;
    for (int i = 0;i < m;i ++) {
        string s; cin >> s;
        sum += mp[s];
    }
    cout << sum << '\n';
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
