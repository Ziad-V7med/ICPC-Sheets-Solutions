#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int n; cin >> n;
    vector<pair<int, int>>v(n);

    for (int i = 0;i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());
    
    vector<pair<int, int>>res;
    int x = v[0].first,y = v[0].second;

    for(int i = 1; i < n; i++) {
        if (v[i].first <= y) {
            y = max(y, v[i].second);
        }
        else {
            res.push_back({x, y});
            x = v[i].first,y = v[i].second;
        }
    }

    res.push_back({x, y});

    for (auto ele : res) {
        cout << ele.first << " " << ele.second << endl;
    }
}