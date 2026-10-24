#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 3;
    char a[10][10];
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = '.';
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] != '.') {
                char current = '.';
                if (a[i][j + 1] == a[i][j] && a[i][j] == a[i][j - 1]) current = a[i][j];
                else if (a[i + 1][j] == a[i][j] && a[i][j] == a[i - 1][j]) current = a[i][j];
                else if (a[i - 1][j - 1] == a[i][j] && a[i][j] == a[i + 1][j + 1]) current = a[i][j];
                else if (a[i - 1][j + 1] == a[i][j] && a[i][j] == a[i + 1][j - 1]) current = a[i][j];

                if (current != '.') {
                    cout << a[i][j] << " wins\n";
                    return 0;
                }
            }
        }
    }
    
    cout << "draw\n";
    return 0;
}
