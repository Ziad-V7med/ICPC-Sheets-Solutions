#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n, k; cin >> n >> k;
    vector<int>v(n);
    vector<int>freq(105);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }

    vector<int>ans;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (freq[v[i]]) {
            if (cnt < k) {
                cnt++;
                ans.push_back(i + 1);
                freq[v[i]] = 0;
            }
            else {
                break;
            }
        }
    }
    if (cnt == k) {
        cout << "YES" << endl;
        for (auto it : ans) {
            cout << it << " ";
        }
        return 0;
    }
    cout << "NO";
}