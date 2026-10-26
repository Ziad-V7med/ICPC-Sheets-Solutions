
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
    string s; cin >> s;
    int ans = 0,c = 0;
    for (auto &i:s) {
        if (i == '(') {
            c++;
        }
        else if (c && i == ')') {
            c--;
            ans+=2;
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
