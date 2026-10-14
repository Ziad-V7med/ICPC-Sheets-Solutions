#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n; cin >> n;
    int arr[n][n];
    vector<int>res(n + 1);
    vector<vector<int>>v(n + 1, vector<int>(n + 1));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            v[i + 1][arr[i][j]]++;
        }
    }

    int x = n - 1;

    for (int i = 1; i <= n - 2; i++) {
        int ans = 0;
        for (int j = 1; j <= n; j++) {
            if (v[j][i] == x) {
                ans = j;
                break;
            }
        }
        res[ans] = i;
        x--;
    }

    x = n - 1;

    for (int i = 1; i<=n; i++) {
        if (res[i] == 0) 
            res[i] = x,x++;

        cout << res[i] <<" ";
    }
}