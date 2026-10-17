#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;

    ll rev = 0;

    while (n > 0) {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }

    cout << rev << endl;

    return 0;
}