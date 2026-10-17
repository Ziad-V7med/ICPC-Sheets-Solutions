#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define int long long
const int mod = 1e9 + 7;
const int oo = 2e18;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> is_primes(1e5 + 5 , true);
    is_primes[0] = false , is_primes[1] = false;
    for (int i = 2; i * i <= 1e5 + 1; i++) {
        if (is_primes[i]) {
            for (int j = i * i; j <= 1e5 + 1; j += i) {
                is_primes[j] = false;
            }
        }
    }
    int n;  cin >> n;
    if (n <= 2) {
        cout << 1 << ln;
        for (int i = 2; i <= n + 1; i++) {
            cout << 1 << " ";
        }
    } else {
        cout << 2 << ln;
        for (int i = 2; i <= n + 1; i++) {
            if (is_primes[i]) {
                cout << 1 << " ";
            } else {
                cout << 2 << " ";
            }
        }
    }

    return 0;
}