#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;

    int max_hight = 0;
    for (int i = 1; i <= n; i++) {
        int h;
        cin >> h;

        if (h > max_hight) {
            max_hight = h;
        }
    }

    cout << max_hight << endl;

    return 0;
}