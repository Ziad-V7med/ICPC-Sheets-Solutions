#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int p[105];
    int ans[105];
    
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        ans[p[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
    return 0;
}
