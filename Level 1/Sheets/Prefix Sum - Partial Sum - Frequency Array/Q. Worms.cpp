#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int n; cin >> n;
    vector<int>v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int>ans(1e6 + 5, -1);
    
    int x = 1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v[i]; j++) {
            ans[x] = i + 1;
            x++;
        }
    }

    int q; cin >> q;
    
    while (q--) {
        int y; cin >> y;
        cout << ans[y] << endl;
    }
}