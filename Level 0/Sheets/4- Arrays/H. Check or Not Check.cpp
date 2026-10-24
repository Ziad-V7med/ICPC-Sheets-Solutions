#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int q_r = -1, q_c = -1;
    int k_r = -1, k_c = -1;
    bool found_q = false;

    for (int i = 0; i < 8; i++) {
        string s;
        cin >> s;

        int q_pos = s.find('Q');
        if (q_pos != -1) {
            found_q = true;
            q_r = i;
            q_c = q_pos;
        }

        int k_pos = s.find('K');
        if (k_pos != -1) {
            k_r = i;
            k_c = k_pos;
        }
    }

    if (found_q && (q_r == k_r || q_c == k_c || abs(q_r - k_r) == abs(q_c - k_c))) {
        cout << "Check\n";
    } else {
        cout << "Not Check\n";
    }
    return 0;
}
