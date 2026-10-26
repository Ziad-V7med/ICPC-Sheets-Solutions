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
    vector<ll> v(n); for (auto &i:v) cin >> i;
    map<ll,ll> suff;
    ll sum = 0;
    for (int i = n-1;i > 0; i--) {
        sum += v[i];
        suff[sum] = i;
    }

    ll ans = -4e18;
    sum = 0;
    for (int i = 0; i+1 < n; i++) {
        sum += v[i];
        if (suff.find(sum) != suff.end() && suff[sum] > i) {
            ans = max(ans,sum);
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