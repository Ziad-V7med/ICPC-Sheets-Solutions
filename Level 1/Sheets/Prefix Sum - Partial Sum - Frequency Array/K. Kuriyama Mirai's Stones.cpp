#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int n; cin >> n;
    vector<long long>v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<long long>a = v;
    for (int i = 1; i < n; i++) {
         v[i] += v[i - 1];
    }
 
    sort(a.begin(), a.end());

    for (int i = 1; i < n; i++) {
        a[i] += a[i - 1];
    }

    int q; cin >> q;
    while (q--) {
 
        int ty, l, r; cin >> ty >> l>> r;
        r--, l--;

        long long ans = 0;

        if (ty == 1) {
            ans = v[r];
            if (l > 0)
                ans -= v[l - 1];
        }
        else {
            ans = a[r];
            if (l > 0)
                ans -= a[l - 1];
        }

        cout << ans << endl;
    }
}