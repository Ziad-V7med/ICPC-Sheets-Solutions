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
    ll sum = 0,ans = 0;
    priority_queue<ll,vector<ll>,greater<>> q;
    for (int i = 0;i < n;i ++) {
        int x; cin >> x;
        sum += x;
        ans++;
        q.push(x);
        while (sum < 0) {
            sum -= q.top();
            q.pop();
            ans--;
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
