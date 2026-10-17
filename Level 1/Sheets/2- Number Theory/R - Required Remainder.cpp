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
        int x , y , n;  cin >> x >> y >> n;
        int f = (n - y) / x;
        int ans = (f * x) + y;
        cout << ans << ln;
    }

    return 0;
}
