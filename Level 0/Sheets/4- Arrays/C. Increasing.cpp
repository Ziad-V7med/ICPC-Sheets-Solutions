#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[105];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        bool is_increasing = true;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                is_increasing = false;
                break;
            }
        }

        if (is_increasing) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
