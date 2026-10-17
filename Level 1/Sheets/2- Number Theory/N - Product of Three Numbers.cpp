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
        set<int> s;
        map<int, int> mp;
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
        if (s.size() >= 3) {
            int a = *s.begin();
            s.erase(a);
            int res1 = a;
            for (int i = 0; i < mp[a] - 1; i++) {
                res1 *= a;
            }
            int b = *s.begin();
            s.erase(b);
            int res2 = b;
            for (int i = 0; i < mp[b] - 1; i++) {
                res2 *= b;
            }
            int c = 1;
            for (auto i : s) {
                c *= i;
                for (int j = 0; j < mp[i] - 1; j++) {
                    c *= i;
                }
            }
            cout << "YES" << ln;
            cout << res1 << " " << res2 << " " << c << ln;
        } else if (s.size() == 2) {
            int a = *s.begin();
            s.erase(a);
            int b = *s.begin();
            s.erase(b);
            if (mp[a] >= 2 && mp[b] >= 2) {
                cout << "YES" << ln;
                int c = a * b;
                int res1 = a , res2 = b;
                for (int i = 0; i < mp[a] - 2; i++) {
                    res1 *= a;
                }
                for (int i = 0; i < mp[b] - 2; i++) {
                    res2 *= b;
                }
                cout << res1 << " " << res2 << " " << c << ln;
            } else if (mp[a] == 1 && mp[b] >= 3) {
                cout << "YES" << ln;
                int c = b;
                for (int i = 0; i < mp[b] - 2; i++) {
                    c *= b;
                }
                cout << a << " " << b << " " << c << ln;
            } else if (mp[b] == 1 && mp[a] >= 3) {
                cout << "YES" << ln;
                int c = a;
                for (int i = 0; i < mp[a] - 2; i++) {
                    c *= a;
                }
                cout << a << " " << b << " " << c << ln;
            } else {
                cout << "NO" << ln;
            }
        } else {  // size = 1
            int a = *s.begin();
            if (mp[a] >= 6) {
                cout << "YES" << ln;
                int b = a * a;
                int c = a;
                for (int i = 0; i < mp[a] - 4; i++) {
                    c *= a;
                }
                cout << a << " " << b << " " << c << ln;
            } else {
                cout << "NO" << ln;
            }
        }
    }

    return 0;
}