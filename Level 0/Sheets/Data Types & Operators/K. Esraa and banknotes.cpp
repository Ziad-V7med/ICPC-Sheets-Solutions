#include <iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;

    int count = 0;
    count += amount / 50;
    amount -= count * 50;

    int twenties = amount / 20;
    count += twenties;
    amount -= twenties * 20;

    count += amount;
    cout << count << '\n';
    return 0;
}
