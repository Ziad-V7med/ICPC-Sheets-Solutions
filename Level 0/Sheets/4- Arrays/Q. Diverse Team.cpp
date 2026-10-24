#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int idx[105];
    for (int i = 0; i < 105; i++) {
        idx[i] = -1;
    }
    
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        idx[x] = i;
    }

    int ans[105];
    int ans_size = 0;
    
    for (int i = 1; i <= 100; i++) {
        if (idx[i] != -1) {
            ans[ans_size] = idx[i];
            ans_size++;
        }
    }

    if (ans_size < k) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        for (int i = 0; i < k; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
