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
        map<int, int> mp;
        set<int> s;
        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                s.insert(i);
                mp[i]++;
                n /= i;
            }
        }
        if (n > 1) {
            s.insert(n);
            mp[n]++;
        }
        int mx = 0;
        int res = 0;
        for (auto i : mp) {
            if (i.second > mx) {
                mx = i.second;
                res = i.first;
            }
        }
        mp[res]--;
        int res2 = res;
        for (auto i : s) {
            if (i != res) {
                for (int j = 0; j < mp[i]; j++) {
                    res2 *= i;
                }
            }
        }
        cout << mp[res] + 1 << ln;
        for (int i = 0; i < mp[res]; i++) {
            cout << res << " ";
        }
        cout << res2 << ln;
    }

    return 0;
}
