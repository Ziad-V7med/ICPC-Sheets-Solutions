#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            cout << 'J';
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << 'S';
            if (j < n - 1) {
                cout << ' ';
            }
        }
        cout << "\n";
    }
    return 0;
}
