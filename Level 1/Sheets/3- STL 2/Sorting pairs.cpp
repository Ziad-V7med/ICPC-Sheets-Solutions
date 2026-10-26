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
    vector<pair<string,ll>> v(n);
    for (auto &[na,s]:v) {
        cin >> na >> s;
    }
    sort(v.begin(),v.end(),[=](pair<string,ll> &a,pair<string,ll> &b) {
        if (a.second != b.second) return a.second > b.second;
        return a.first < b.first;
    });
    for (auto &[na,s]:v) {
        cout << na << " " << s << '\n';
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
