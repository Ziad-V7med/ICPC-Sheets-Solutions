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
    deque<int> v(n);
    for (auto &i:v) cin >> i;
    set<ll> st;
    int q; cin >> q;
    while (q--) {
        char c; cin >> c;
        if (c == 'L') {
            if (!v.empty()) {
                st.insert(v.front());
                v.pop_front();
            }
        }
        else if (c == 'R') {
            if (!v.empty()) {
                st.insert(v.back());
                v.pop_back();
            }
        }
        else {
            if (st.empty()) {
                cout << -1 << '\n';
            }
            else{
                cout << *st.rbegin() << '\n';
                st.erase(*st.rbegin());
            }
        }
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
