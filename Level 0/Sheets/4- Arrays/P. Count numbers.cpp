#include <iostream>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    int cnt[100005] = {0};
    
    while (q--) {
        int t, x;
        cin >> t >> x;
        
        if (t == 1) {
            cnt[x]++;
        } else {
            cout << cnt[x] << "\n";
        }
    }
    return 0;
}
