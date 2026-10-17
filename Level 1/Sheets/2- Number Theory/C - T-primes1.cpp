#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define int long long
const int mod = 1e9 + 7;
const int oo = 2e18;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int limit = 1e6 + 5;
    vector<bool> is_prime(limit , true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < limit; i++){
        if (is_prime[i] == true){
            for (int j = i * i; j < limit; j += i){
                is_prime[j] = false;
            }
        }
    }

    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int r = sqrt(n);
        if (r * r == n && is_prime[r] == true){
            cout << "YES" << "\n";
        } else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}