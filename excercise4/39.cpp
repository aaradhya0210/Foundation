#include <iostream>
using namespace std;

int main() {
    int num, rev;

    cout << "Enter a 4-digit number: ";
    cin >> num;

    rev = (num % 10) * 1000 +
          ((num / 10) % 10) * 100 +
          ((num / 100) % 10) * 10 +
          (num / 1000);

    if (num == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}