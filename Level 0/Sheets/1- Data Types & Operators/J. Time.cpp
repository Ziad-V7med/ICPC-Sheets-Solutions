#include <iostream>
using namespace std;

int main() {
    long long totalSeconds;
    cin >> totalSeconds;

    long long hours = totalSeconds / 3600;
    totalSeconds %= 3600;

    long long minutes = totalSeconds / 60;
    totalSeconds %= 60;

    cout << hours << ' ' << minutes << ' ' << totalSeconds << '\n';
    return 0;
}