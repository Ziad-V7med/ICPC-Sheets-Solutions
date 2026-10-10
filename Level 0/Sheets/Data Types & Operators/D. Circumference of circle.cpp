#include <iostream>
using namespace std;

int main() {
    int radius;
    cin >> radius;

    const double pi = 3.1415926535;
    double circumference = 2 * pi * radius;
    
    cout << circumference << '\n';

    return 0;
}