#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;

    int sum = 0;

    while (n > 0) {
        int last = n % 10;
        sum += last;
        n /= 10;
    }

    cout << sum << endl;

    return 0;
}