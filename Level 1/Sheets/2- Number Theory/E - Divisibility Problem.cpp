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
        if (a % b == 0) {
            cout << 0 << ln;
        } else {
            int c = a + (b - (a % b)); // first multiple of b > a;
            cout << c - a << ln;
        }
    }

    return 0;
}