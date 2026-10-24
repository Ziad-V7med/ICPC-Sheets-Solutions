#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    char a[105][105];
    for (int i = 0; i < 105; i++) {
        for (int j = 0; j < 105; j++) {
            a[i][j] = '.';
        }
    }
    
    for (int i = 1; i <= n; i++) {
        string row;
        cin >> row;
        for (int j = 1; j <= m; j++) {
            a[i][j] = row[j - 1];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == '#') {
                cout << '#';
            } else {
                int cnt = 0;
                for (int x = i - 1; x <= i + 1; x++) {
                    for (int y = j - 1; y <= j + 1; y++) {
                        if ((x != i || y != j) && a[x][y] == '#') {
                            cnt++;
                        }
                    }
                }
                cout << cnt;
            }
        }
        cout << "\n";
    }
    return 0;
}
