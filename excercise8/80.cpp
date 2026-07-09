#include <iostream>
using namespace std;

int main() {
    int num , first , last ;
    cin >> num;

    last = num % 10;
    while ( num >= 10) {
        num = num / 10;

    }
    first = num ;
    cout << "First digit is " << first << endl;
    cout << "Second digit is " << last << endl;

    return 0;

}