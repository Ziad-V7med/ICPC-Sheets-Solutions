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
    int n,k; cin >> n >> k;
    vector<int> v(n);
    for (auto &i:v) cin >> i;
    sort(v.begin(),v.end());
    if (k == 0) {
        if (v[0] == 1) {
            cout << -1 << '\n';
        }
        else {
            cout << 1 << '\n';
        }
    }
    else if (k == n) {
        cout << v[n-1] << '\n';
    }
    else {
        if (v[k-1] == v[k]) cout << -1 << '\n';
        else cout << v[k-1] << '\n';
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
