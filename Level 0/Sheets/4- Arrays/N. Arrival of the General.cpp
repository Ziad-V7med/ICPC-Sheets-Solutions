#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[105];
    
    int mx_val = -1, mx_idx = -1;
    int mn_val = 1000000000, mn_idx = -1;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > mx_val) {
            mx_val = a[i];
            mx_idx = i;
        }
        if (a[i] <= mn_val) {
            mn_val = a[i];
            mn_idx = i;
        }
    }

    int ans = mx_idx + (n - 1 - mn_idx);
    if (mx_idx > mn_idx) {
        ans--;
    }

    cout << ans << "\n";
    return 0;
}
