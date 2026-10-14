#include<iostream>
using namespace std;

const int N = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n; cin >> n;

    int arr[2 * n];

    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }

    int freq[N] = {0};

    int ans=0;
    int cnt=0;

    for (int i = 0; i < 2 * n; i++) {
        freq[arr[i]]++;

        if (freq[arr[i]] == 2) {
            freq[arr[i]] = 0;
            cnt--;
        }
        else cnt++;

        ans = max(ans, cnt);
    }
    cout << ans;
}