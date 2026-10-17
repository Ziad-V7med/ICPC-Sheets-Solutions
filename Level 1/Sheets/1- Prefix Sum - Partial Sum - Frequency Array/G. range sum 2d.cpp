#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n, m, q; cin >> n >> m >>q;
    long long arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            arr[i][j] += arr[i][j - 1];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 1; j < n; j++) {
            arr[j][i] += arr[j - 1][i];
        }
    }
  
    while (q--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        x1--,y1--,x2--,y2--;

        long long sum = arr[x2][y2];

        if (x1 > 0 && y1 > 0) {
            sum += arr[x1 - 1][y1 - 1];
        }
        if (x1 > 0) {
            sum -= arr[x1 - 1][y2];
        }
        if (y1 > 0) {
            sum -= arr[x2][y1 - 1];
        }

        cout << sum << endl;
    }
}