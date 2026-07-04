#include <iostream>
using namespace std;

int main() {
    int num, d1, d2, d3, d4, d5, sum;

    cout << "Enter a 5-digit number: ";
    cin >> num;

    d1 = num / 10000;
    d2 = (num / 1000) % 10;
    d3 = (num / 100) % 10;
    d4 = (num / 10) % 10;
    d5 = num % 10;

    sum = d1 + d2 + d3 + d4 + d5;

    cout << "Sum = " << sum <<endl;

    return 0;
}