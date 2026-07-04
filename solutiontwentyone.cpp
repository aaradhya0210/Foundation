#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter two numbers: ";
    cin >> a ;
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "After Swapping:\n";
    cout << "a = " << a;
    cout << "b = " << b;

    return 0;
}