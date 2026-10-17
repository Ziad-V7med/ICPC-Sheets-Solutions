#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    int n;
    cin >> n;

    int d = 1;

    for (int i = 1; i <= (n + 1) / 2; i++) {
        int stars = (n - d) / 2;

        for (int j = 1; j <= stars; j++) {
            cout << '*';
        }

        for (int j = 1; j <= d; j++) {
            cout << 'D';
        }

        for (int j = 1; j <= stars; j++) {
            cout << '*';
        }

        cout << endl;
        d += 2;
    }

    d = n - 2;

    for (int i = 1; i <= n / 2; i++) {
        int stars = (n - d) / 2;

        for (int j = 1; j <= stars; j++) {
            cout << '*';
        }

        for (int j = 1; j <= d; j++) {
            cout << 'D';
        }

        for (int j = 1; j <= stars; j++) {
            cout << '*';
        }

        cout << endl;
        d -= 2;
    }

    return 0;
}