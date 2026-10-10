#include <iostream>
using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;

    long long quotient = (x + y - 1) / y;
    cout << x - quotient * y << ' ' << quotient << '\n';
    return 0;
}
