#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    long long a[200005];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n, greater<long long>());

    long long sum = 0;
    int limit = min(n, k);
    for (int i = 0; i < limit; i++) {
        sum += a[i];
    }

    cout << sum << "\n";
    return 0;
}
