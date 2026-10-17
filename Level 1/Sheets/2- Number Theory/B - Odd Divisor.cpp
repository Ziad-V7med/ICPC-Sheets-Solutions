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
        while (n % 2 == 0) {
            n /= 2;
        }
        if (n > 1) cout << "YES" << ln;
        else cout << "NO" << ln;
    }

    return 0;
}