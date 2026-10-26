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
    set<int> st;
    for (int i = 0;i < n; i++) {
        string s;
        ll x;
        cin >> s >> x;
        if (s == "insert") {
            st.insert(x);
        }
        else if (s == "find") {
            if (st.find(x) != st.end()) {
                cout << "found" << '\n';
            }
            else {
                cout << "not found" << '\n';
            }
        }
        else if (s == "lower_bound") {
            auto it = st.lower_bound(x);
            if (it != st.end()) {
                cout << *it << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
        else {
            auto it = st.upper_bound(x);
            if (it != st.end()) {
                cout << *it << '\n';
            }
            else {
                cout << -1 << '\n';
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
