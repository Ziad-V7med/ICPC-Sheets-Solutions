#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define int long long
const int mod = 1e9 + 7;
const int oo = 2e18;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin >> n;
    vector<int> v = {6 , 8 , 4 , 2};
    if (n == 0) {
        cout << 1 << ln;
    } else {
        cout << v[n % 4] << ln;
    }

    return 0;
}
