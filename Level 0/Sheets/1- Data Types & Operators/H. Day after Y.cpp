#include <iostream>
using namespace std;

int main() {
    int today, daysToAdd;
    cin >> today >> daysToAdd;

    cout << (today + daysToAdd) % 7 << '\n';
    return 0;
}
