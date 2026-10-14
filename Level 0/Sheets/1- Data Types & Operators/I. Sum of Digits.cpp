#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int digitSum = 0;
    digitSum += number % 10;
    digitSum += (number % 100) / 10;
    digitSum += number / 100;

    cout << digitSum << '\n';
    return 0;
}
