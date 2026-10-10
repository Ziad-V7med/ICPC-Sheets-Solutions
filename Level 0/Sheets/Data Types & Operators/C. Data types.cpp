#include <iostream>
using namespace std;

int main() {
    char character;
    int integer;
    long long largeNumber;
    float decimalNumber;
    double doubleNumber;

    cin >> character >> integer >> largeNumber >> decimalNumber >> doubleNumber;

    cout << character << ' ' << integer << ' ' << largeNumber << ' ' << decimalNumber << ' ' << doubleNumber << '\n';

    return 0;
}