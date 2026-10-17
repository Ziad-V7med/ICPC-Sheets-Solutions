#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;

    ll a = 0, b = 1, sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = a + b;
        cout << a << " ";
        a = b;
        b = sum;
    }

    return 0;
}