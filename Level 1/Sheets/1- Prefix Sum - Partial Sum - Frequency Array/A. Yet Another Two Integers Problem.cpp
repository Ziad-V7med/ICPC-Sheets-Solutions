#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int tc; cin>>tc;

    while (tc--) {
        int a, b;
        cin >> a >> b;

        if (a < b) swap(a, b);

        long long ans = 0;
        long long dif = a - b;

        for (int k = 10; k >= 1; k--) {
            ans += dif / k;
            dif %= k;
        }

        cout << ans << endl;
    }
}