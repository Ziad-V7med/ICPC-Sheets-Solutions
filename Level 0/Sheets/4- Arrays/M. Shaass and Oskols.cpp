#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[105] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
        a[x - 1] += y - 1;
        a[x + 1] += a[x] - y;
        a[x] = 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << "\n";
    }
    return 0;
}
