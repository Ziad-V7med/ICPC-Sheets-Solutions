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
    vector<ll> p2;
    for (ll i = 0,p = 1;i < 60; i++) {
        p *= 2;
        p2.push_back(p);
    }

    int n; cin >> n;
    map<ll,ll> frq;

    vector<ll> v(n);
    for (auto &i:v) cin >> i,frq[i]++;

    int ans = 0;
    for (auto &i:v) {
        bool flag = true;
        frq[i]--;
        for (auto &j:p2) {
            if (frq.find(j-i) != frq.end() && frq[j-i] > 0) {
                flag = false;
                break;
            }
        }
        if (flag) ans++;
        frq[i]++;
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
