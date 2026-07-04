#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three angles: ";
    cin >> a >> b >> c;

    if (a + b + c == 180)
        cout << "Valid Triangle";
    else
        cout << "Invalid Triangle";

    return 0;
}