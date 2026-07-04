#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a 4-digit number: ";
    cin >> n;

    int d1 = n / 1000;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;

    switch (d1 == d4 && d2 == d3)
    {
        case 1:
            cout << "Palindrome";
            break;

        default:
            cout << "Not Palindrome";
    }

    return 0;
}