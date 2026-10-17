#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define int long long
const int mod = 1e9 + 7;
const int oo = 2e18;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n , k;  cin >> n >> k;
    vector<int> is_prime(n + 1 , true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    int cnt = 0;
    for (int i = 0; i < primes.size(); i++) {
        int cur = primes[i] - 1;
        for (int j = 0; j + 1 < primes.size(); j++) {
            if (primes[j] + primes[j + 1] == cur) {
                cnt++;
                break;
            }
        }
    }
    if (cnt >= k) cout << "YES" << ln;
    else cout << "NO" << ln;

    return 0;
}