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
    int n,q; cin >> n >> q;
    vector<string> v(n); for (auto &i:v) cin >> i;
    vector<bool> avail(n,1);
    map<string,vector<int>> mp;
    for (int i = n-1;i >= 0;i--) {
        mp[v[i]].push_back(i);
    }
    while (q--) {
        int op; cin >> op;
        if (op == 1) {
            string x; cin >> x;
            if (mp.find(x) != mp.end() && !mp[x].empty()) {
                avail[mp[x].back()] = 0;
                mp[x].pop_back();
            }
            else {
                cout << "Not found \n";
            }
        }
        else if (op == 2) {
            bool flag = false;
            for (int i = 0;i < n;i ++) {
                if (avail[i]) cout << v[i] << " ",flag = true;
            }
            if (!flag) cout << 0;
            cout << '\n';
        }
        else {
            bool flag = false;
            for (int i = n-1; i >= 0;i --) {
                if (avail[i]) cout << v[i] << " ",flag = true;
            }
            if (!flag) cout << 0;
            cout << '\n';
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
