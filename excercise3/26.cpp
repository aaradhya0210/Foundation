#include <iostream>
using namespace std;

int main() {
    int num, d1, d2, d3, d4, d5, rev;

    cout << "Enter a 5-digit number: ";
    cin >> num;

    d1 = num / 10000;
    d2 = (num / 1000) % 10;
    d3 = (num / 100) % 10;
    d4 = (num / 10) % 10;
    d5 = num % 10;

    rev = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;

    cout << "Reverse = " << rev <<endl;

    return 0;
}