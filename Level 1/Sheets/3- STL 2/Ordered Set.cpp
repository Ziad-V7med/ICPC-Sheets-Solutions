#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define vll vector<ll>
#define ll long long
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void kilua() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
}

const ll mod = 1e9 + 7;
const ll N = 1e6 + 5;
const ll lg = 22;
mt19937 rnd(system_clock::now().time_since_epoch().count());

void solve() {
    int n,q; cin >> n >> q;

    ordered_set<pair<ll,ll>> st;

    ll cnt = 0;
    for (int i = 0; i < n;i ++) {
        ll x; cin >> x;
        st.insert({x,cnt++});
    }

    while (q--) {
        ll k; cin >> k;
        if (k > 0) {
            st.insert({k,cnt++});
        }
        else {
            k *= -1;
            k--;
            auto it = st.find_by_order(k);
            if (it != st.end()) {
                st.erase(it);
            }
        }
    }
    if (st.empty()) {
        cout << 0 << '\n';
    }
    else {
        cout << st.find_by_order(0)->first << '\n';
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
