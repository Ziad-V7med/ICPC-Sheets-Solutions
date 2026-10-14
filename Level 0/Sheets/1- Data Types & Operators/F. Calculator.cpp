#include <iostream>
using namespace std;

int main() {
    long long firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;

    cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << '\n';
    cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << '\n';
    cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << '\n';
    cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << '\n';
    cout << firstNumber << " % " << secondNumber << " = " << firstNumber % secondNumber << '\n';

    return 0;
}