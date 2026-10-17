#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;

    bool even = false, odd = false;

    while (n > 0) {
        int d = n % 10;
        n /= 10;
        if (d % 2 == 0) {
            even = true;
        }
        else {
            odd = true;
        }
    }

    if (even && odd) {
        cout << "Not Good Number\n";
    }
    else {
        cout << "Good Number\n";
    }

    return 0;
}