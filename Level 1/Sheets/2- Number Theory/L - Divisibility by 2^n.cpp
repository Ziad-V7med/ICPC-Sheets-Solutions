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
    while (t--) {
        int n;  cin >> n;
        vector<int> a(n);
        int count = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            while (a[i] % 2 == 0) {
                count++;
                a[i] /= 2;
            }
        }
        if (count >= n) {
            cout << 0 << ln;
        } else {
            vector<int> v(n, 0);
            for (int i = 0; i < n; ++i) {
                int cur = i + 1;
                int cnt = 0;
                while (cur % 2 == 0) {
                    cnt++;
                    cur /= 2;
                }
                v[i] = cnt;
            }
            sort (v.rbegin(), v.rend());
            vector<int> pref(n , 0);
            pref[0] = v[0];
            for (int i = 1; i < n; ++i) {
                pref[i] = pref[i - 1] + v[i];
            }
            int rem = n - count;
            auto idx = lower_bound(pref.begin(), pref.end(), rem);
            if (idx == pref.end()) {
                cout << -1 << ln;
            } else {
                int res = idx - pref.begin();
                cout << res + 1 << ln;
            }
        }
    }

    return 0;
}
