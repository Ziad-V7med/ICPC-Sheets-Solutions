#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;


    while (++n) {
        int y = n;

        int d1 = y % 10;
        y /= 10;
        int d2 = y % 10;
        y /= 10;
        int d3 = y % 10;
        y /= 10;
        int d4 = y % 10;

        if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4) {
            cout << n << endl;
            break;
        }
    }

    return 0;
}