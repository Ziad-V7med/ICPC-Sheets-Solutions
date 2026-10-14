#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;

    int pref_a[5001];
    int pref_b[5001];
    
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            pref_a[i + 1] = pref_a[i] + 1;
            pref_b[i + 1] = pref_b[i];
        }
        else{
            pref_b[i + 1] = pref_b[i] + 1;
            pref_a[i + 1] = pref_a[i];
        }
    }

    long long ans = 0;

    for (int i = 0; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            
            int count_a1 = pref_a[i];
            int count_b = pref_b[j] - pref_b[i];
            int count_a2 = pref_a[n] - pref_a[j];

            long long total = count_a1 + count_b + count_a2;
            ans = max(ans, total);
        }
    }

    cout << ans << endl;
}