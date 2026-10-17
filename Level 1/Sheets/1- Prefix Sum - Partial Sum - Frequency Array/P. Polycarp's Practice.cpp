#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int n, k; cin >> n >> k;
    vector<int>v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<pair<int, int>>a;

    for (int i = 0; i < n; i++) {
        a.push_back({v[i], i});
    }

    sort(a.begin(), a.end(), greater<pair<int, int>>());
    
    long long sum = 0;
    vector<int>ans;

    for (int i = 0; i < k; i++) {
        sum += a[i].first;
        ans.push_back(a[i].second);
    }

    sort(ans.begin(), ans.end());

    cout << sum << endl;
    
    if (k == 1) {
        cout << n << endl;
        return 0;
    }
 
    cout << ans[1] << " ";

    for (int i = 1; i < k - 1; i++) {
        cout << ans[i + 1] - ans[i] << " ";
    }

    cout << n - ans[k - 1] << endl;
}