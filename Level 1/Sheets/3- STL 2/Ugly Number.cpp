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
    priority_queue<ll,vll,greater<>> q;
    q.push(1);
    vector<ll> nums = {2,3,5};
    set<ll> st;
    st.insert(1);

    for (int i = 0;i < n;i ++) {
        ll x = q.top();
        q.pop();

        for (auto &j:nums) {
            if (st.find(x*j) == st.end()) {
                st.insert(x*j);
                q.push(x*j);
            }
        }
    }

    auto it = st.begin();
    for (int i = 1;i < n;i ++) {
        it++;
    }
    cout << *it << '\n';
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
