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
        int n;  cin >> n;
        vector<int> a(n + 1);
        int g1 = 0, g2 = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                g1 = gcd(g1, a[i]);
            } else {
                g2 = gcd(g2, a[i]);
            }
        }
        int cnt1 = 0, cnt2 = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                if (a[i] % g2 != 0) {
                    cnt1++;
                }
            } else {
                if (a[i] % g1 != 0) {
                    cnt2++;
                }
            }
        }
        if (cnt1 == (n + 1) / 2) {
            cout << g2 << ln;
        } else if (cnt2 == n / 2) {
            cout << g1 << ln;
        } else {
            cout << 0 << ln;
        }
    }

    return 0;
}
