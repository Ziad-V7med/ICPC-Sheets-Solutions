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
    vector<string> v(n);
    for (auto &i:v) cin >> i;

    sort(v.begin(),v.end(),[](string &a,string &b) {
        return a.size() < b.size();
    });

    for (int i = 0;i+1 < n;i ++) {
        if (v[i+1].find(v[i]) == string::npos) {
            cout << "NO";
            return;
        }
    }
    cout << "YES" << '\n';
    for (auto &i:v) {
        cout << i << "\n";
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
