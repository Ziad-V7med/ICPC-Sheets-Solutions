#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char a[105][105];
    for (int i = 0; i < 105; i++) {
        for (int j = 0; j < 105; j++) {
            a[i][j] = '#';
        }
    }

    for (int i = 1; i <= n; i++) {
        string row;
        cin >> row;
        for (int j = 1; j <= m; j++) {
            a[i][j] = row[j - 1];
        }
    }

    for (int i = 0; i < n + 2; i++) {
        for (int j = 0; j < m + 2; j++) {
            cout << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}
