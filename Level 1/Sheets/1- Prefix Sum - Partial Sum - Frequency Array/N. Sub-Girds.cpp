#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        int w, h, n;
        cin >> w >> h >> n;
        vector<vector<int>> arr(w + 2, vector<int>(h + 2));

        for (int i =0 ; i < w; i++) {
            for (int j = 0; j <h ; j++) {
                arr[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            int x1, x2, y1, y2;
            int a, b, c, d; cin >> a>> b >> c >> d;

            x1 = min(a, c);
            y1 = min(b, d);
            x2 = max(a, c);
            y2 = max(b, d);
            
            x1--, y1--, x2--, y2--;

            arr[x1][y1] += 1;
            arr[x1][y2 + 1] -= 1;
            arr[x2 + 1][y1] -= 1;
            arr[x2 + 1][y2 + 1] += 1;
        }

        for (int i = 0; i < w; i++) {
            for (int j = 1; j < h; j++) {
                arr[i][j] += arr[i][j - 1];
            }
        }

        for (int i = 0; i < h; i++) {
            for (int j = 1; j < w; j++) {
                arr[j][i] += arr[j - 1][i];
            }
        }

        int cnt = 0;

        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                if (arr[i][j] == 0) cnt++;
            }
        }
        cout << cnt << endl;
    }
}
