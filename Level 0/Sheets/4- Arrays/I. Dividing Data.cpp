#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;
    
    long long a[200005];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    long long cur = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (cur + a[i] > x) {
            break;
        }
        cur += a[i];
        ans++;
    }

    cout << ans << "\n";
    return 0;
}
