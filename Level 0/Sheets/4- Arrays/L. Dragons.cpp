#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long s;
    int n;
    cin >> s >> n;

    pair<int, int> a[10005];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        if (s <= a[i].first) {
            cout << "NO\n";
            return 0;
        }
        s += a[i].second;
    }

    cout << "YES\n";
    return 0;
}