#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define int long long
const int mod = 1e9 + 7;
const int oo = 2e18;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> primes(1e6 + 5 , true);
    vector<int> v;
    primes[0] = false , primes[1] = false;
    for (int i = 2; i * i <= 1e6; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= 1e6; j += i) {
                primes[j] = false;
            }
        }
    }
    for (int i = 2; i <= 1e6; i++) {
        if (primes[i]) {
            v.push_back(i);
        }
    }
    int n , m;  cin >> n >> m;
    vector<vector<int>> g(n , vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }
    int ans = oo;
    for (int i = 0; i < n; i++) {
        int cur = 0;
        for (int j = 0; j < m; j++) {
            int idx = lower_bound(v.begin(), v.end(), g[i][j]) - v.begin();
            cur += (v[idx] - g[i][j]);
        }
        ans = min (ans, cur);
    }
    for (int j = 0; j < m; j++) {
        int cur = 0;
        for (int i = 0; i < n; i++) {
            int idx = lower_bound(v.begin(), v.end(), g[i][j]) - v.begin();
            cur += (v[idx] - g[i][j]);
        }
        ans = min (ans, cur);
    }
    cout << ans << ln;



    return 0;
}
