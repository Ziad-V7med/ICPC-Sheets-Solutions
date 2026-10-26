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
    vector<int> v(n);
    for (auto &i:v) cin >> i;
    set<vector<int>> st;
    for (int i = 0 ;i < n;i ++) {
        for (int j = i+1;j < n;j ++) {
            swap(v[i],v[j]);
            st.insert(v);
            swap(v[i],v[j]);
        }
    }
    cout << st.size() << '\n';
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
