#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define int long long
const int mod = 1e9 + 7;
const int oo = 2e18;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int const limit = 3000 + 5;
    vector<bool> is_prime(limit , true);
    vector<int> p_factors(limit , 0);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < limit; i++){
        if (is_prime[i] == true){
            for (int j = i; j < limit; j += i){
                is_prime[j] = false;
                p_factors[j]++;
            }
        }
    }
    int n;  cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++){
        if (p_factors[i] == 2){
            ans++;
        }
    }
    cout << ans;

    return 0;
}