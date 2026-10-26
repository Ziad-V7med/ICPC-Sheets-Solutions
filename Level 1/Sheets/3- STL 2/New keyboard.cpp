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
    string s;
    while (getline(cin,s)) {
        if (s.empty()) break;
        deque<string> q;
        string tmp;
        bool flag = true;
        for (auto &c:s) {
            if (c == '[') {
                if (flag) q.push_back(tmp);
                else q.push_front(tmp);
                flag=0;
                tmp.clear();
            }
            else if (c == ']') {
                if (flag) q.push_back(tmp);
                else q.push_front(tmp);
                flag=1;
                tmp.clear();
            }
            else {
                tmp += c;
            }
        }
        if (flag) q.push_back(tmp);
        else q.push_front(tmp);

        for (auto &i:q) {
            cout << i;
        }
        cout << '\n';
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
