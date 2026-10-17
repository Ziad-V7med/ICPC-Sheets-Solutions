#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define int long long
const int mod = 1e9 + 7;
const int oo = 2e18;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;  cin >> x;
    vector<pair<int,int>> f; // factors
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            if (x / i != i) {
                f.push_back({i , x / i});
            }
        }
    }
    int mx = x;
    int res1 = 1 , res2 = x;
    for (int i = 0; i < f.size(); i++) {
        int a = f[i].first;
        int b = f[i].second;
        if (gcd(a , b) == 1) {
            if (b < mx) {
                mx = b;
                res2 = b;
                res1 = a;
            }
        }
    }
    cout << res1 << " " << res2 << ln;

    return 0;
}