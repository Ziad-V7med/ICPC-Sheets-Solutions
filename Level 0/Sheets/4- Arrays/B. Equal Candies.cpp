#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[55];
        long long sum = 0;
        long long mn = 1000000000000000000LL;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            mn = min(mn, a[i]);
        }

        cout << sum - n * mn << "\n";
    }
    return 0;
}
