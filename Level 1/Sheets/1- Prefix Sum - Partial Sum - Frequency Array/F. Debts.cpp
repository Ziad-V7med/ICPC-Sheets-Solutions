#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, m; cin >> n >>m;
    vector<long long>a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (m--) {
        int y, x, z; cin >> y >> x >>z;

        a[y - 1] -= z;
        a[x - 1] += z;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}