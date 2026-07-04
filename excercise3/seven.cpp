#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter Dividend and Divisor: ";
    cin >> a >> b;

    cout << "Quotient = " << a / b << endl;
    cout << "Remainder = " << a % b;

    return 0;
}