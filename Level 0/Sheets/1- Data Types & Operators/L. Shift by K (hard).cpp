#include <iostream>
using namespace std;

int main() {
    char letter;
    int shift;
    cin >> letter >> shift;

    int index = letter - 'a';
    index = (index + shift) % 26;

    char result = index + 'a';
    cout << result << '\n';
    return 0;
}

