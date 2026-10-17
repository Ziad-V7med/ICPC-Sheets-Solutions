#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;

    ll sum = 0;
    int odd = 0, even = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        sum += x;
        if (x % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    cout << sum << " " << odd << " " << even << endl;

    return 0;
}