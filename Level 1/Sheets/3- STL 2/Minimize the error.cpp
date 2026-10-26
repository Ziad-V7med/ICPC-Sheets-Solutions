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
    int n,k1,k2;
    cin >> n >> k1 >> k2;
    k1 += k2;
    vector<ll> v(n);
    for (auto &i:v) cin >> i;

    priority_queue<ll> q;
    for (int i = 0;i < n;i ++) {
        ll x; cin >> x;
        q.push(abs(v[i]-x));
    }

    while (k1--) {
        ll x = q.top();
        q.pop();
        x--;
        q.push(abs(x));
    }

    ll ans = 0;
    while (!q.empty()) {
        ans += q.top() * q.top();
        q.pop();
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
