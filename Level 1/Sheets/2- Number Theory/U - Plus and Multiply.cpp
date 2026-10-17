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
        int n , a , b;
        cin >> n >> a >> b;
        bool ok = false;
        int cur = 1;
        while (cur <= n) {
            if ((n - cur) % b == 0) {
                ok = true;
                break;
            }
            cur *= a;
            if (cur == 1) {
                break;
            }
        }
        if (!ok) {
            cout << "No" << ln;
        } else {
            cout << "Yes" << ln;
        }
    }

    return 0;
}

