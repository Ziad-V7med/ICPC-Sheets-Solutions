#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define int long long
const int mod = 1e9 + 7;
const int oo = 2e18;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin >> t;
    while(t--) {
        int l , r;  cin >> l >> r;
        if (2 * l <= r) {
            cout << l << " " << 2 * l << ln;
        } else {
            cout << -1 << " " << -1 << ln;
        }
    }

    return 0;
}
