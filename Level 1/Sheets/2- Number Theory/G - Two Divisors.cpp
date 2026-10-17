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
        int a , b;  cin >> a >> b;
        if (b % a == 0) {
            cout << b * (b / a) << ln;
        } else {
            cout << a * b / gcd(a , b) << ln;
        }
    }

    return 0;
}