#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    vector<int>v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long sum = 0;
    long long res = INT64_MIN;

    for (int i = 0; i < n; i++) {
        if (sum + v[i] < v[i]) {
            sum = v[i];
        }
        else {
            sum += v[i];
        }

        res = max(res, sum);
    }
    cout << res;
}