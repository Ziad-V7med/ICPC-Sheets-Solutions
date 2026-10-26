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

struct st {
    string name;
    int g[4];
    int sum;
    bool operator<(const st& other)const {
        if (sum != other.sum) return sum > other.sum;
        return name < other.name;
    }
};

void solve() {
    int n; cin >> n;
    vector<st> v(n);
    for (auto &[na,g,s]:v) {
        cin >> na;
        for (auto &i:g) {
            cin >> i;
            s += i;
        }
    }
    sort(v.begin(),v.end());
    for (auto &[na,g,s]:v) {
        cout << na << " " << s << " ";
        for (auto &i:g) {
            cout << i << " ";
        }
        cout << '\n';
    }
}

signed main() {
    kilua();
    const auto start = high_resolution_clock::now();
    ll tc = 1;
    // cin >> tc;
    // srand(time(0));
    while (tc--) {
        solve();
    }
    const auto end = high_resolution_clock::now();
    cerr << "time = " << duration_cast<microseconds>(end - start).count() << " μs\n";
    cerr << "time = " << duration_cast<milliseconds>(end - start).count() << " ms\n";
    cerr << "time = " << duration_cast<seconds>(end - start).count() << " s\n";
}
